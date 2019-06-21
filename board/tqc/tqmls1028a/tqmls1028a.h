
extern int enetc_imdio_read(struct mii_dev *bus, int port, int dev, int reg);
extern void enetc_imdio_write(struct mii_dev *bus, int port, int dev, int reg, u16 val);
extern void register_imdio(struct udevice *dev);

extern int serdes_protocol;

