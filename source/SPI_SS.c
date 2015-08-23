/*
 * SPI_SS.c
 *
 *  Created on: 30 июля 2015 г.
 *      Author: Muxamor
 */
/*#include <stdint.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <fcntl.h>
#include <sys/ioctl.h>
#include <linux/types.h>
#include <linux/spi/spidev.h>

#define ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))


///static const char *device = "/dev/spidev1.0";
//static uint8_t mode=SPI_MODE_1;
//static uint8_t bits = 8;
//static uint32_t speed = 500000;
//static uint16_t delay = 0;
/*
static void transfer(int fd)
{
	int ret;
	uint8_t tx[] = {
		0x15, 0x00,0x20,0x10,0x20,0x30,0x40,0x40
	};

	uint8_t rx[ARRAY_SIZE(tx)] = {0, };

	struct spi_ioc_transfer tr = {
		.tx_buf = (unsigned long)tx,
		.rx_buf = (unsigned long)rx,
		.len = ARRAY_SIZE(tx),
		.delay_usecs = delay,
		.speed_hz = speed,
		.bits_per_word = bits,
	};

	ret = ioctl(fd, SPI_IOC_MESSAGE(1), &tr);
	if (ret < 1)
		pabort("can't send spi message");

	for (ret = 0; ret < ARRAY_SIZE(tx); ret++) {
		if (!(ret % 6))
			puts("");
		printf("%.2X ", rx[ret]);
	}
	puts("");
}

*/
/*
int spi_device_open(char *device){

	int fd;

	fd = open(device, O_RDWR);
	if (fd < 0){
		perror("can't open device");
		return EXIT_FAILURE;
	}

	return fd;
}


int set_spi_settings(int fd,uint8_t mode,uint8_t bits, uint32_t speed, uint16_t delay){
	int ret = 0;

	/*
	 * spi mode
	 *//*
	ret = ioctl(fd, SPI_IOC_WR_MODE, &mode);
	if (ret == -1){
		perror("can't set spi mode");
	    return EXIT_FAILURE;
	}

	ret = ioctl(fd, SPI_IOC_RD_MODE, &mode);
	if (ret == -1){
		perror("can't get spi mode");
		return EXIT_FAILURE;
	}

	/*
	 * bits per word
	 *//*
	ret = ioctl(fd, SPI_IOC_WR_BITS_PER_WORD, &bits);
	if (ret == -1){
		perror("can't set bits per word");
		return EXIT_FAILURE;
	}


	ret = ioctl(fd, SPI_IOC_RD_BITS_PER_WORD, &bits);
	if (ret == -1)
		perror("can't get bits per word");
		return EXIT_FAILURE;
	}


	/*
	 * max speed hz
	 *//*
	ret = ioctl(fd, SPI_IOC_WR_MAX_SPEED_HZ, &speed);
	if (ret == -1){
		perror("can't set max speed hz");
		return EXIT_FAILURE;
	}

	ret = ioctl(fd, SPI_IOC_RD_MAX_SPEED_HZ, &speed);
	if (ret == -1)
		perror("can't get max speed hz");
		return EXIT_FAILURE;
	}

	printf("spi mode: %d\n", mode);
	printf("bits per word: %d\n", bits);
	printf("max speed: %d Hz (%d KHz)\n", speed, speed/1000);

	return 0;
}

	//transfer(fd);

//	close(fd);

//	return ret;
//}

*/
