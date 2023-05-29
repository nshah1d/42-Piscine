#!/bin/sh
ifconfig | grep 'ether ' | cut -b 8-24
