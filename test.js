const fs = require('fs');

try {
  const html = fs.readFileSync('index.html', 'utf-8');
  if (!html.includes('Tap Game')) {
    throw new Error('HTML does not contain expected title');
  }
  console.log('index.html exists and contains Tap Game title.');
} catch (err) {
  console.error(err.message);
  process.exit(1);
}
