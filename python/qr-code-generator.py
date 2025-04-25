import qrcode
import os

data = input('Enter the text or URL: ').strip()
filename = input('Enter the filename: ').strip()

# Ensure filename ends with .png
if not filename.lower().endswith('.png'):
    filename += '.png'

qr = qrcode.QRCode(box_size=10, border=4)
qr.add_data(data)
qr.make(fit=True)  # Ensures it adjusts to the size of the data

image = qr.make_image(fill_color='black', back_color='white')
image.save(filename)

print(f'✅ QR code saved as {os.path.abspath(filename)}')
