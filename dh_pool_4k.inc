	; ------------------------------------------------------------------------
	; HeavyThing x86_64 assembly language library and showcase programs
	; Copyright © 2015-2018 2 Ton Digital 
	; Homepage: https://2ton.com.au/
	; Author: Jeff Marrison <jeff@2ton.com.au>
	;       
	; This file is part of the HeavyThing library.
	;       
	; HeavyThing is free software: you can redistribute it and/or modify
	; it under the terms of the GNU General Public License, or
	; (at your option) any later version.
	;       
	; HeavyThing is distributed in the hope that it will be useful, 
	; but WITHOUT ANY WARRANTY; without even the implied warranty of
	; MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
	; GNU General Public License for more details.
	;       
	; You should have received a copy of the GNU General Public License along
	; with the HeavyThing library. If not, see <http://www.gnu.org/licenses/>.
	; ------------------------------------------------------------------------
	;       
	; dh_pool_4k.inc: 4096 bit Diffie-Hellman parameters
	; see dh_pool.inc for commentary
	;

if used dh$pool_p | defined include_everything

dalign
dh$pool_p:
        dq      dhp4k1, dhp4k2, dhp4k3, dhp4k4, dhp4k5, dhp4k6, dhp4k7, dhp4k8, dhp4k9, dhp4k10, dhp4k11, dhp4k12, dhp4k13, dhp4k14, dhp4k15, dhp4k16, dhp4k17, dhp4k18, dhp4k19, dhp4k20
dh$pool_p_size = ($ - dh$pool_p) shr 3

dalign
dh$pool_g:
	dq	dhg2, dhg3, dhg2, dhg2, dhg2, dhg2, dhg2, dhg2, dhg2, dhg3, dhg2, dhg2, dhg2, dhg2, dhg2, dhg3, dhg2, dhg3, dhg3, dhg3

dalign
dhp4k1:
	dq	64, .data, 0, 0
align 16
.data:	dq	0xb01ddb02f41e7ce7, 0x1bad52a123b9d16f, 0xa2581ffbebbed406, 0xd68c73f45b7e38c1, 0x965293d8383d4c36, 0x6b0ac73a1d246282, 0x49f30ac11a8d0aee, 0x2c64f170636e5084, 0xf905415f6137daff, 0x92ab0b5518d01920, 0xe7c31363b245093c, 0x1364bdb77c6c149f, 0x3196fa5e1d7d9565, 0xbcbda3f561f1d9ed, 0x9a7e796a8562ca46, 0xcbde16d3fd42ebcc, 0x5d7d74a64fc95adb, 0x8e433d5ca4b0fcd0, 0xb5c804825cfca718, 0x4b35a3555b3b9bbf, 0xc7609eb6d2ef6f5f, 0x3ac561c4ba540cc7, 0x570c28926b82f5ea, 0xe75d17708abfeb76, 0xec69e03544835cca, 0xd31b48571495f694, 0x817cd88f109423e9, 0xaf2e1127d5bfbe03, 0x7b28f92658dde0ef, 0x5b5a92b32357aa8a, 0xff534d0ca5b09105, 0xaf1246a4b1a17ab5, 0x4cd80a06b5ea5051, 0x40747675141ad437, 0x841a19d93efc04fb, 0x2eb24c2f65b6bc1, 0xd587aa61584fd1c4, 0x473ee634e5fb8b1d, 0xf479f60f1fc025a6, 0x9f722e0814bfeaca, 0x8b8bd83717b86eed, 0xbb88864386e5aa8, 0x2b78d134a5a5969, 0x515882f6371b9bbb, 0xf0561933d917275f, 0x8cfb6fba78db14d0, 0xc3d37022c10f58e7, 0x829620010145b885, 0xd8f6dc7e8a7ff3bf, 0x4096d91e14d10dde, 0x905a12bcb2f3292e, 0xfcb360dcda641740, 0x65a27cce6f55e860, 0x7f7ea52488d53a6b, 0x2f374965b3879bcd, 0xf7fe23e5096a0969, 0x551ae82fffd310c9, 0x1be575af86fc8ea, 0xa1818feb2887dc43, 0x9b07bbcd19ad86d6, 0x3b474bf0039130c4, 0xa4bde37b7b2fa471, 0x21c58966c98c8974, 0x861333ad303445f2

dalign
dhp4k2:
	dq	64, .data, 0, 0
align 16
.data:	dq	0x9090e8d2564ba94b, 0xe27951d20d5d629f, 0x88928dc041018c12, 0x194dc2f8cfbd16a5, 0x58b42eebf3175cd6, 0x412b71d6b957ef36, 0x911905f7fec22512, 0x3f8d23160f6ffd30, 0x1610a8cdb5417317, 0x93044b9f2a9a3494, 0x47b0236a2ba80d1d, 0x523f55676f382eb3, 0xe094958b31e33b36, 0xd5947d176f3ab21f, 0x5c06325af38fea4f, 0x99fd05434aab363c, 0xeb14f0fa483bc31, 0x67d8796b4b4e14ab, 0x668a6e0cf2e2f2ed, 0x5a8e3707ebf55148, 0x1dce72c2cdf251e6, 0x1c9b65e40caf20fa, 0x871b21a523426ec5, 0xdc07f6cbf747e7b1, 0xe293136f6602685b, 0x1c99e4ba532c7e58, 0xbf2c2deca7dcb32, 0x5b32d88d5930d913, 0xd13e0a68cc513e25, 0x5891603c80766967, 0x181db0f9d282c249, 0xafbbf97df43808b9, 0xc8ca7c6f532756c9, 0xcacb8f0198f3b201, 0xa8091fe8b68b2227, 0x3e1a48f9b9e6c4a, 0x2404f9ce910dfcd5, 0x5f68fb1d13166750, 0xe490a11186db7b58, 0xc1ff85283ae6b9e1, 0x4127b9266812eb59, 0x4a47498c95e8d436, 0x8dddee9fd1ce46e1, 0xd3030135b6ed9b8a, 0xc27c1937dff79382, 0xf4a965628bbe4b2a, 0x82a05c45324874e5, 0xea2289eb9e49c8c0, 0x1217fed772524ead, 0xf190de24575ca757, 0x67eeac79c66a88cd, 0x77b677b4a1cd4d7, 0x86bd4a3a6b095db3, 0xcacf48b758b4e2a4, 0xc51b46ee771c2ca5, 0xfb4dd9795072d49c, 0xdc4bd3144b72b679, 0x97f2f374530e3858, 0x5bd2e45182fd162e, 0xfddbd23dde16c214, 0x1e92a8adf58ded3d, 0xc0d3f6f283d3ecf6, 0x372e1238efc215a6, 0xfd51792a4fede103

dalign
dhp4k3:
	dq	64, .data, 0, 0
align 16
.data:	dq	0x943f2ff045a1d6df, 0x708507e575b1b69c, 0xf2db8f8531e33101, 0x2e15fb33f8d2c275, 0xb3029243ff499be1, 0xca4c2e635881b7b1, 0x1544bdbb1502849b, 0xfd319f45f262d23e, 0x6472ac4f2306911f, 0xb87a05b2b56d6c01, 0x5000eba47b345131, 0x877ac3d102de8269, 0x71d5602deeaa305a, 0xebcf3ac87e942026, 0xa216a905d1ee8a, 0xbc0e680b339cf81c, 0x570b2473a04c08bb, 0xf01d7f4845a7f98b, 0x8dcd30d515e526fd, 0xd433221ef1475f7f, 0x3dece49a57cc256a, 0x981115e84b9db33c, 0x2e7d82dbe0890e05, 0x7b98667485a747a, 0x78d255764d39362, 0xa93a3ae123597d33, 0xa154120992954b86, 0xeab9936cf24a6a8f, 0xae55eceabb0ae4f4, 0x5641168a72249630, 0x8f48b98153f60256, 0x4973e90df1c83c3c, 0x2b45033273d83b2d, 0xf99644ab366bb24b, 0xb4dbadb04ddd0dff, 0x38605e3d2df05041, 0x314a762ff1d7c415, 0xc35329ba7048d1a3, 0xbf2699150239d63a, 0xc5cbce40a9653b6f, 0xb2d6d66072d493f0, 0xf670b90633587835, 0x1b4d1526cf58358, 0x69adb1ae1de7c7f7, 0x720946bc49674d0c, 0x8ea063a16a9be640, 0xf8d18e88cd72b701, 0xcf43f89c77317116, 0xca4867c015464f8d, 0x879ec5aa225c3e61, 0x14e6c5820fa6c9d7, 0x99160671b50101b8, 0xc819465564a75055, 0x3af29aafe949a5cf, 0x9bc7605c88a021f4, 0xb2e2028ed78e458d, 0xcbb94553d1221b4, 0x26584c54a64d4a20, 0x6550d92210f8d0d1, 0xa3934c959bbea14, 0xbb2778937f53f3ff, 0x71fcae0c789629d3, 0xedc3b5434a6b65dd, 0xbd89fca15f0a7752

dalign
dhp4k4:
	dq	64, .data, 0, 0
align 16
.data:	dq	0x43b071477054b8e7, 0xc1f2ada6ef2591d4, 0x6f7e320b1e8b23af, 0xba37fdc6de7be240, 0xc0db9ec32af81afa, 0xd18b077e8fa91901, 0x274b27b8d8a3813, 0x60fa888c1af546a, 0xf683686aa0d261bd, 0xf3cda7909d5eb2c, 0xb57d57db16bbbfa1, 0xef17292b21d2e7d4, 0x1a2e83b4ac80137d, 0xaa52e62741953223, 0x99bd88ca5aad7fa3, 0xc07f07e95bd32166, 0x90517c3e5506564e, 0xec60ad1eaf74cf9f, 0x354b3c98ff7ef801, 0xd1d7c084d1c40a1c, 0xd54311066fcf0e6e, 0xa20cec8ddb6886f9, 0xc412168249d1ea31, 0x3a117c451e47626d, 0xd17c302e0dbf0197, 0x5e28844483c5430c, 0x78de17a9986c706e, 0x38cfe1ada1511c76, 0xb38b60cbe1113be4, 0xa6e789566d0f2eb6, 0x6596ccd1cc58b0b5, 0x592be31af7b28e22, 0x1bb18a25f0b3274a, 0x2adb40449d84d831, 0xb1378da419f9c991, 0x75c0f02f0fdc7db4, 0x179d4d9c84e299c6, 0xc8d7968b0994fc00, 0xef69807db8677b2, 0x5e63d0664cc64a09, 0x99fc1c3cb2340ba6, 0x5fd4728aecd8818a, 0x7fa011b271244c8f, 0xc95706feef3536bc, 0x394d03f72b8c4c6a, 0x13fe52a974f79253, 0x403c89f60a2e8afd, 0xcf3946b17060fb3e, 0xa75c030b24a3e9d3, 0x478ffa4c01e35eb5, 0x855cebf9cff8dee0, 0xdabd69e469e1136b, 0x4719bd47fb928c6, 0x18d3981524b052e, 0x9bd202d2a39d6c4f, 0x67f0730a95d0dfd7, 0x47b590d6bd0be7f3, 0xb114b63421a9a1f9, 0xf1ae9bcab3c65e84, 0x612da25bdc4b1f68, 0xeb8c1fc051b2e862, 0xbd7d964b7ea2a5eb, 0xfe9d82fd02f5c785, 0x88412b9cdab26eee

dalign
dhp4k5:
	dq	64, .data, 0, 0
align 16
.data:	dq	0x42b0c3472ff774df, 0xe434d004719afe61, 0x3a6c7cedcf2edddb, 0x44f6c4780620f58, 0x5b9bf63ea939cd87, 0x325bddd506c1fc04, 0x8c5e8f85a736e6a5, 0x694e85dd2f607aa1, 0x297a833d576960b1, 0xe50b67670640cb50, 0x3a352244cd0a74c0, 0x52b3e8644e06096a, 0xd6e7bcc17e24eeb5, 0x565d1a311ee48a12, 0xca6dc3259a41f218, 0x97ba91600c1a690e, 0x867df1a1b5fa9786, 0x72d48b4d205aca17, 0x61e19809c6832aa9, 0x627bc7f428b15d94, 0x157892276d62d257, 0x770ac8d3788eb246, 0x4f0e74d6ad95f2b5, 0x8fed9521251abe2c, 0x76d577f6e717886d, 0xc0bbf53be55816a8, 0xf86e8446467f3fa, 0x5fcef2e801a7e411, 0xce07a39e4a142c70, 0x571cce7cf9dff21e, 0xa2de149105b43aa, 0x1091cbd798d2af25, 0xd170019d9d64f311, 0x63b1c53a93014df0, 0xfaf3985efafe8b59, 0xc176d8eea3f904f4, 0xd20d5faa3379d8f6, 0x4af2f2f3182702ad, 0xa2826f7caead568b, 0x1a19498ad21d3c95, 0x7ad16e445483dabd, 0x45eae764ee58a209, 0x7fef72b72ec9f667, 0x4dff8f9452b4d577, 0x682524a44699ff1a, 0xe54ff51a68dcef47, 0xa4b9f56e993adcc, 0xa446bdbc7b4a48e2, 0x110ed8844805775e, 0x301774379014533a, 0x41f9f73b5bec775, 0x51788161bc58e4dd, 0x5e7edba84f9cb3f, 0xcf369e5edb491f64, 0x466d4e7e411c17e4, 0x4c2acb37024b5f9e, 0xcd94f2080dbfcb9c, 0xb77e6a98b36a5e73, 0x14546a6e0767a173, 0xa13e2df20ac631fc, 0xbef0ea76cd2affc1, 0xfbde43084b0d3108, 0x3ad60e34f9c0252f, 0xebb4a779ffd9eb06

dalign
dhp4k6:
	dq	64, .data, 0, 0
align 16
.data:	dq	0x112b90e109ce6c17, 0x11ecc4d50f740647, 0x9248adf7f0023fde, 0xdc3be6bba729581c, 0x537c16d786a00ca3, 0xd1a698ff1681f13, 0x8c516ca69e008efb, 0xfb0c0f3510e011fa, 0x75fd3dfc2295b742, 0x124c6875ea27d035, 0xaa10d0d69ce7e562, 0x1259196be1fabaeb, 0x5dfbf744532f0794, 0x3dfcba58dd018ed7, 0x1e382788ab1e6e24, 0x2fed35bd1c117e69, 0x9c32d37d2e98a2aa, 0x36a27a5a96af5dc9, 0xed0c93ae59fc3d4a, 0x81e85be39279f18f, 0x530d2fc3bde88c79, 0x572fba93db648acb, 0xf21695ccd9416d04, 0x5890d99c828b24bf, 0x9c6c91cbb951887c, 0xe68a9dfb343d8d8c, 0x5552ed3289e8dd4, 0x30d9f1d46a906845, 0x532336ad13fbd025, 0x108df4cf14d364fc, 0x5eb658581a4df70a, 0x6f75670397c5a23f, 0xef98ecdefed5c1ab, 0xdbfea256a652099b, 0x1390ac98131fa85, 0xb5a994e88de69ba8, 0x4c328d8f9b0287ab, 0x6b3c19353df747ff, 0x4a941df20d8005bb, 0x6d8d5d5f39b0c311, 0xa416e590762446f3, 0xfe81f988d1de7d4b, 0x62eed6b617f33d45, 0x513a064a44588286, 0x53e105966514687b, 0x3406292009a34a55, 0x5d9db7aac9ff2508, 0x39286d6ccbb99dd0, 0xfe6db04b64dd1d2, 0x5664fca3de3d4be3, 0x3a343919df4fe439, 0x9f775a6c68a987d6, 0xb38f689bfe249bf0, 0xe503cb585d3d5d7e, 0xde7898fa2febf5b2, 0xa5eed1de359ea04a, 0xc9ee6475b38673e3, 0x2d6661ef76d8422b, 0x86cbd368235219dc, 0xede70110cd90553f, 0x45d8efa5dd03f5de, 0xb777f3b2a079a534, 0x98ef469fca7fec22, 0xb8adc8d3148ebdfc

dalign
dhp4k7:
	dq	64, .data, 0, 0
align 16
.data:	dq	0xe1b7e59cfc3a4d7f, 0x4d555df305633772, 0xb172a0aa0398cfe2, 0x871ec651b98c4aea, 0xd4e821fe6e4649be, 0xd4f7171ed7976245, 0xa844b02e45d21063, 0xbcc138402e966b35, 0x1f2f94435254e273, 0x6f1f5ad3689d8b2d, 0xf6da666ecd09a022, 0xe58c18366df1121f, 0x151998372e9f6cd8, 0x4b27a0a9122222f7, 0xa1c024a44a4aa464, 0x692cddcb1a35a241, 0xb25e300cc90fa9e7, 0x63029362cbe1f9ff, 0xef9d895a4ef15d5e, 0x701566975a29570, 0xc2283e615d30d175, 0xc7ff5cc83c8c17f7, 0xe3826c432b258ef9, 0x99307b1c600c8dee, 0x5dd0ca0922c78fce, 0xdc22606b088e8e48, 0x8a0c4a7ceb02f9af, 0x47e247cec1fa3acc, 0xc614c205a1a4a3e9, 0xc595d52472094fbb, 0xafb0e5b7af0e64bd, 0xec6fd3e162577808, 0x1ba8b81d8d0d4bfd, 0x88604af8a1d2ca79, 0x1d2b3c5fcf694e64, 0x74149ec6c76292b2, 0x1559c5e02c112670, 0x79fad555d88d1fa7, 0x63c29ac3fc625edd, 0xc41c27c6beef0834, 0x82097d5353f4c942, 0x1279ae28d62ce3a4, 0x794cdc16d6332e7c, 0x7cd59105095eb153, 0xdff86fa1c2b501d5, 0xf40954c973825408, 0xa3e005a13e387026, 0xc7d1cde3033f4dd6, 0x8200d068555d2cd4, 0x570041057da14669, 0xf17a89642d73fe7d, 0xb26a39d6bcdf889b, 0x45cff13894e5bc42, 0xac623ec8a7984661, 0x515872ea3a393f26, 0xefabf1a4b86e3f95, 0xfeb4f036a02a1a7f, 0x6235324a259b0b42, 0x3bd827aa4dcdeab2, 0x6924cdd25268ff1f, 0xf1b5eb9a3598238a, 0xb3ae92ff2a548d14, 0x5f047f9716c894a0, 0xe3e996bcb3ebd675

dalign
dhp4k8:
	dq	64, .data, 0, 0
align 16
.data:	dq	0x87581f71944dff47, 0xff4648c68b7ed5b5, 0xa1599960309221e4, 0x12af5bf937ef5eb9, 0xaf517c61d9032569, 0xe1d5b85b36b76b52, 0xc1c1a62d7e6e8b6e, 0x840f7903df0c6dc0, 0x705f1d1c8fce64be, 0xbd1cea1324dfee0, 0x7522d9538a132d6e, 0x5084720152cdfbc2, 0xec5da206f2a3941f, 0xb07328efe4fcee02, 0xaded4ef07dc196ac, 0x3cc51e6857195297, 0xb89e6668e909ee62, 0xfa9251fea9fb1412, 0x261c765088dd2ce7, 0xc2a959ffa9332cb0, 0x43f1756f7993c3d9, 0x7ac3fb83b899001f, 0xba728dbd32976081, 0x15047e03f47e44a4, 0xc5f7623fcb898e4c, 0xdf3cb964f6915226, 0x555cc5a1559f8f10, 0x9f7dd079e4e4e8a2, 0x4309e0de956ffd83, 0xbf023a87d2ab60a5, 0xfb880b0ee347c86a, 0x8fc268ac6fc0a711, 0x1bb8d4bf9cdb9f73, 0xb3c53efbbe54a0a9, 0x4c7100ec32158839, 0x33916d1cc3c969b7, 0x78fc89d097e6ef47, 0x15bb7f78570299f8, 0xcf89787e475a98b6, 0x20786e36d5929f16, 0x44d4e35ea9258b88, 0xa763e0a4a3cc0e3a, 0x139e7d8b19725e2a, 0x476b48f53b2ff904, 0x63de27cfbc6f1ce, 0x8c11b925fc29230f, 0x985b056914cfdb9c, 0x4a7841ba92f24768, 0x6ae58d18a71bf1bf, 0x69e7de2599600a67, 0xfd57b9cc8cfef2c, 0x30d93dccab5635bc, 0xed6a928fc6c0b20f, 0x68b9c5d7836bdaf5, 0x6704a4fc975989c6, 0x493cbb2eea8c0adb, 0xce10370bbc7e650c, 0xe3715836dabab82b, 0x1709956c87fad061, 0x65b74bfa282693bd, 0x7194db13197de3b3, 0xc790d327526ccae0, 0xc333f6cfb1a0c42e, 0xe52db7d837d31ac8

dalign
dhp4k9:
	dq	64, .data, 0, 0
align 16
.data:	dq	0x8c8805a1171fd297, 0xef7f4c65f2a17f41, 0xbecf5336b21f9a32, 0xfa3fc96f5e74af94, 0xcfaba65b45b41da1, 0xb9aab264d1889b13, 0xc73ea0fd1252cbf4, 0x3189e893a7ff5644, 0x47a3e3feea8e4a0, 0x5c366d9f55595aff, 0x26afdc764e014812, 0xca711f3f2b3fb033, 0xf9ddd53eac6c32d1, 0xa06730cc700acb71, 0xe6b31daf8b665338, 0x801e9a1ba0ab0e66, 0xc21b24ae5533ebee, 0x72fdda24fed2d7e5, 0x2a604d143190c382, 0x400dd4d86cfe127e, 0x1a3c1767487d4a2b, 0x5844dc09546f0461, 0xd7b031b4debd0258, 0x162ac5c4d677c33a, 0xbd74cf3290a3dc0e, 0xb45c75f3ca70812c, 0xf443859590802e81, 0x2f87bced868c4d23, 0x79fe8af54bf369e1, 0x126e23f07c29535b, 0xc63a07fd5d6aba61, 0x617e8fd9bd0e83d0, 0xba79680059cf35da, 0xe2ad399980f924ba, 0x70e8679887aa5500, 0x9c63fe3890cdb6f, 0xece1bcafcb4af7dc, 0xecaea25be6cd7f1e, 0xb440338fd4e9afa5, 0x3567e2a4683ea17e, 0xbdbcf70a3b6bf5db, 0x43072b1ba8add66e, 0x44e820cbbe396aa2, 0xd46c4cd579f16c50, 0xd0193cc983ede921, 0xa819fe51ba81a755, 0x471faab026701b8b, 0x859b701530af2fd6, 0xd94e58adf05f9b00, 0x84ae6a6a6367f81f, 0x142205dedd526d08, 0xf8f3bb0130d3f8db, 0x928169afdfff8ead, 0x33564276b9641125, 0xe59fc14c88faffd8, 0xdfde04fd1623ea43, 0x7ec18eb2974375d0, 0x86b8bb5cb294276, 0x6d7a0f30ca0cb7e9, 0xd8ded5da261fed47, 0x580f99ad3b0f30e8, 0x3633ca1e58df7ccf, 0xf49071225211dc84, 0x8c52105c922fb472

dalign
dhp4k10:
	dq	64, .data, 0, 0
align 16
.data:	dq	0x158f02d59febc45b, 0x813cc63a4908f012, 0xe9f494c51c497e6b, 0x31a2f1283857eac0, 0xb113467055489d54, 0x7fbd8438992e84e3, 0x3ce364d5c46564c7, 0xa966b34bc505ea04, 0x75a18a6001a8f16d, 0x386faaf1ab65a7bf, 0x51912164becaa815, 0x9fe75fd3874514ec, 0x614b9d272baea42d, 0x117306fc42d96653, 0xe1a9ad904d28b313, 0x1262c92e05d4958f, 0x6ce4417371f7644e, 0x67573783c89388c7, 0x6ac22cd5005c6327, 0x27afb21fdce7a77a, 0xfd91f08de1cdd5b8, 0xe97cd715b6d8b0f9, 0x7cd26d857df70ec4, 0xf0781945bbda8924, 0x4d3cc6a9d4466b6, 0x60774d319da0c1e, 0xa5331da1e92aeb8a, 0xc1faca1d09e71ef4, 0x4dccc65069c2766b, 0x6baad9194cbb672d, 0x90516ff0c625743, 0xf9b72ec7d5cd2e94, 0xca93a3e3224afb7d, 0x5595718ddc1d5628, 0x7278977c90727709, 0x7a72621d3f9cd0be, 0xa52f49d06fafa21b, 0xeb3498368ce7158a, 0x959f0cbb4af1793b, 0x6ce0170cdebdd279, 0xf68e78755bca9403, 0x95aeb01a045e33e6, 0x142ef5a23148878c, 0x3217c25251658d7a, 0x5d9e2dc1100353fe, 0xfe80978967e600f7, 0x3b99f66eb05fae03, 0x1dae1afd360d19fa, 0xf0a687bb98f2f28c, 0xdd150fc6c563aa7f, 0x7f50932ec8e7ab70, 0x45e539f432fd40bb, 0x61e51009a605e47d, 0xa06d652fb9371a1c, 0x789989cf2df00dcc, 0xbd7bae6585eeed93, 0xb5f0e6768dd5fe1b, 0x800088ccd44a21d8, 0x16347cd167a4ff63, 0x8a2c77d836ab0a50, 0x9b07932f60cb0c5d, 0x58c407e2db736587, 0x510174cb87c8c819, 0xee60c10c1fbc8b28

dalign
dhp4k11:
	dq	64, .data, 0, 0
align 16
.data:	dq	0x517b8d1c5b9904ef, 0x94d1b129c6632f0e, 0xdf6a2658cd761868, 0x53511a2ab3f208b2, 0x65dec9b45c33672b, 0x42f235374016773a, 0x91ce7275734c4851, 0xe3145c23b53c5e2b, 0xd777072ff6020ba6, 0x74903d65b1dd01c, 0x727ffa678f6bac59, 0xe33f39f4902abd2, 0xe9321f1a81f98d7f, 0x8998a55b4e3f0004, 0x52ce32b68f87b80d, 0xe2fb4d971472783c, 0xc0d28d957518ea5f, 0x4514058c5accbe69, 0x26233a44695d2858, 0x433d31634ca823f5, 0x8368f34026523ba8, 0xe077f5ed4d8964c4, 0xf354aa2917a34869, 0xaa09c3c670a31c5c, 0xa52af2e25752b663, 0x6c40223fd429f1d7, 0x26484c99453740c6, 0x9db01107a757485e, 0xacfdf939e16f22de, 0x546ef4dff5741e55, 0xe8378ef7a5663bf6, 0xa600d2ab9674283e, 0x685324923f4a4ce4, 0x573d5951ebe49a7d, 0xa3406e1de3dc2dc3, 0x1580770d2ce50ea8, 0xb956d659a9d2c5a6, 0x135ef21775485f04, 0xfd54d8dffe6f9e30, 0x9aaa340fccf770e1, 0x11db73c96c3ea7e5, 0x12ee132c381677e, 0x7bde633ed679392a, 0x9e3080c63e8504b4, 0xffec345d098a67f2, 0xb07a84c659d00878, 0xe5244ba6d975c7ff, 0x654a2c0cce3dc414, 0x4701ceb977200d8a, 0xee5a66792136d69e, 0x851102cb4c5af9, 0xe1cfea1c3dc725f3, 0x9114942a57e094cb, 0x57610ec75073118e, 0x35423145bef6ad29, 0xcfc519a3d88a49be, 0x9c7caac6daf73cb3, 0x25bdb0e5bc240729, 0x3c7dd4d8773bb614, 0x1beb091efbbe2feb, 0x808117efd679fb80, 0xaeb6be763f3ead1b, 0x839f9fa4cec84bb7, 0xb5fd52618d3a7dec

dalign
dhp4k12:
	dq	64, .data, 0, 0
align 16
.data:	dq	0x20eed42370eebd7f, 0xb24d9fcda73ff2a7, 0x16bdaa8932856de8, 0x6c8262b39647a36a, 0x9a3ffe94fe5e5cb8, 0xed3605dfffe0173c, 0xd7ff47bcc30be7e4, 0x865fc3155b00e25d, 0xb955e4a44e6fb859, 0x9eb2fae6a9d95f49, 0x395f7905904f6bbf, 0x1243a768cd385904, 0x967273a179a02aba, 0x756d363de57aa9e9, 0xd65a02c42e041504, 0x4725687cf4ce9b34, 0xae460112a66beff0, 0x48d8cf924a1a0806, 0xb71f5e74a7fe5a6f, 0x80278c18f43815e7, 0x8f89057d0d1332bb, 0x1e6e2624a28c7e4, 0x7810eaf07d983225, 0x41249c996054b201, 0xcd0a99676b00e330, 0xf8a4ebd2b83854ab, 0x11a5e2eeadd1cfbe, 0xb678169ba3b43465, 0xf6f22bbc9ddf7638, 0x2dd3c4621dffc80f, 0x3f97444d84ba1901, 0x64aa1740745321db, 0x3d2df2a90fdcadb3, 0x667c081ded5f58a8, 0xc8117c39d7033d7d, 0x268221c6bebb4bd2, 0x952686b4dbe0dcd0, 0xd910e6b9dbb5d458, 0x10ac01a0c8ae3ba9, 0x80d895ffbedc0c21, 0x7b76af83b2d009ec, 0x1138ccc3002c1f2c, 0xd0bc4b52cf100dc5, 0xded3e30455af197c, 0x38b86c2912188c4e, 0x9870bbe8e5d56fc7, 0x35c7bac17b5f08d4, 0x1e533e1fef4e72e6, 0xc9fc0fc5cf719309, 0x465551696dcf25a2, 0x9e64ead4dd393e4a, 0x2f4452831bb408f3, 0xe16044016e938f2e, 0x94dc27287d24b22b, 0xf653a45357684685, 0x4d6249796624b607, 0xcde120f22996edff, 0x699074a57c0deaf1, 0xd80bfc7afb6e71f1, 0xa3f65ba6000fa638, 0xf3ae5c00208b43a0, 0x1059ef2b54e631e1, 0xb461945710196a4b, 0xc1ecd618a92ba9cf

dalign
dhp4k13:
	dq	64, .data, 0, 0
align 16
.data:	dq	0x2c86b4e46785000f, 0x5ac02a296a6379f7, 0x4617f78c5b4cde5c, 0xf3b8fb37ad7f9cb0, 0x57daca2b0ce481a7, 0x5a2e0fe7baced06c, 0x8024218503556057, 0xe1a014a049973f0f, 0x820a68ea76aba5de, 0xa63b397ed408f773, 0x2b6116dcf3bbf47d, 0x3830631c98f6cb7a, 0xe76f5d71522fd813, 0x6b2b7bdfa845c374, 0x306adfe57e1f0400, 0x2306e43c0111a9c5, 0x160552a0751bb483, 0x15fe2f1b2ae55bb0, 0x11c944fb3aa8d9ba, 0x6d9732d329980eec, 0xa38a136b599f6f79, 0x7d1ecb778d4f1520, 0x502e0f22533e908, 0x7c10aa464af38044, 0x948f71e4fcc0d48a, 0x98e04ffe077eca18, 0xa888bac35b9d0e54, 0xe3dcac95bf9d3f2d, 0xce6543ca1020d647, 0x6fd805a0e2746aa6, 0x111a765cd9f4c16b, 0x4543bce4a4696fb8, 0x8c33bba90732bbcc, 0x27b1184770b96ab, 0xfcc3a41813639113, 0x3e9c919457aa41f3, 0xf430f64834eecab2, 0x5d262461732ff34, 0x3a54b2121091b8a, 0x92d803c28dbc7db3, 0x5babc2481bdea993, 0x788de25bad06d850, 0x3dc20687939fe6a0, 0x864c641d3701099f, 0xc7d8a0b1f825b48f, 0xc39ea8c2ed1a7675, 0x541d82cfe943d988, 0x357ffcd290e49e59, 0x39a39bf8c3bf1145, 0xbbdb6c84f384fb0, 0xc1d139a1ac75184c, 0x61477c738d15dc59, 0x102482e957c0a09f, 0x2bd17cd90f60b1a, 0xb9deebe42871afd, 0x2680301d030945d, 0x624e5b232218cba5, 0x1f723572014e4238, 0xe74233485c0e3714, 0x5f9d769c5743032c, 0x99f6924a642d0411, 0x99a285438b66a449, 0xcc95aeafe8b16d21, 0x824511d5092fb99c

dalign
dhp4k14:
	dq	64, .data, 0, 0
align 16
.data:	dq	0x5cf11d18c3c2ecf, 0xbc2e236a6db28380, 0x1c9813205773fcac, 0x27f4da48a18b0348, 0xa81886d2af75f05d, 0xc369d0b949e87d4f, 0xf704a1b70d24a6f0, 0x22ab9b0402fcba6c, 0x5570d19af4bd7cd4, 0x42ca66a452e5a0b, 0xa36ddd1df663c8cd, 0xc1357b4bca9bcdd2, 0x92634538f1c956bd, 0xb19eb08e1f0d8954, 0x330d92a29108d9da, 0x75ce60ac120a628b, 0xe6f6b06f3618a0d2, 0xf1aa6473c35cdab7, 0x14d54d9032cd7467, 0x870d0f6e99b91af8, 0xf5646afc6ee81c00, 0x77c69f656d921432, 0xb9ea1af8040e346d, 0x66a60c1bc07cc47e, 0x54ddaaad84d6d92e, 0x83c95f41cb362dd1, 0x9eb22d8060b72872, 0x7ae623bab060cec, 0x10e9338f187dcb0f, 0xb5291ecc07e81613, 0xa6440667996f1960, 0x2d57ad4c1e1af97b, 0x4b4f005a97dc4f6d, 0xc1e30da94b833dff, 0x5b43e67c76fafd76, 0x5f921266ef430e41, 0xced9a98ee317fcf2, 0xf97fff8d9d27d602, 0xce1bec9616513c7c, 0x68173dc86dda0a71, 0x3c7015dc327c6a00, 0x4c7770a06be68d8b, 0x11aef176f789e641, 0xf8d7647d7eb91ab0, 0x266c42ccb787d622, 0xf194bbcb6045b1ea, 0x6eed212e809f2674, 0xd87b8979237397f7, 0x21135ea043fb9f61, 0xc750081b4d99aaf3, 0x7198f85ab1eb0dd7, 0x602a907cc16cb69a, 0x9f8065c688e21877, 0x3b07bebc5a4582b2, 0x650fed568334ec3e, 0x41cb6b4f83602b4a, 0x1f999f9d656e2f47, 0x93e53fcb5f6e56b3, 0xa95534253cd8b6a4, 0xa8eb789e17b4f5b5, 0x28ebd83aad96f62, 0x2d78a45d9bcb8aa, 0x226eaf46d514f2e2, 0xc6a45f54e0eb2522

dalign
dhp4k15:
	dq	64, .data, 0, 0
align 16
.data:	dq	0x489aacfb919b32a7, 0x35193fd858eeb4ca, 0x423334a8122f0a70, 0xfc58afb7a8f7d47, 0x2bf4ca86e7c4dc21, 0x3cc76b1f4deeb5cc, 0x898e46606bebec06, 0x20a7bfc138823736, 0xa6037768cc937529, 0xee8a172c18b311d5, 0x7d58dedc0fd5a60f, 0x1b3242fc1979e79f, 0xc31cdd7983e641f6, 0xcbbf85fe4a91f40c, 0x53268a2359fbd5b, 0x8344aee06f074bb7, 0xdc2e7a1350f8aaa2, 0xe50e5f8ab40f2629, 0xc78234647b8a2d05, 0xf4326ae8e372812a, 0xf302e46c862c44ab, 0x24514f49f07a8a, 0x8ece4a1653cee26f, 0x19e61ce382489871, 0xfa05dd660842d7b7, 0x9b61139482aeb15e, 0x8a229ab1b4445378, 0xfba0f9337694dc06, 0x61736b232646c047, 0xb4b38092cb79e5eb, 0x968ef2efdbf48969, 0xa4dd742b6fb2cd8c, 0xc10937a15876e775, 0xfa39c6bba8086d83, 0xb2dfd1e9cbf2db5e, 0x90a1a2d851535f97, 0x4b28efff9fc06f03, 0x534b23f1b37d597a, 0x7ca96aa5b9c9aea3, 0x3de99c6a33a085bd, 0xcd1e50dcfefed868, 0x78049f771b1f2255, 0x7cbebcd4389b5e3a, 0xff512480103bcecd, 0xbf539d2c89ead523, 0x80d46ca2368bef78, 0x4c058d3ac68fe72f, 0xcd0465ac12098e68, 0xc0f029d60a75cbf, 0xa137df9d5b5b585c, 0x2db6635046d29b22, 0xddeae4714b97fb75, 0x2a04e5ae2cfc577d, 0xfbe5175f5c89c060, 0xe5ca7045d1c39148, 0x80909736cc6dd52c, 0xeaeab53cff5e486a, 0xb833b4e7f2cf698e, 0x6ce5bf1460445061, 0xe4d803ba3180b7d4, 0xaa10c381510a7ed7, 0xc875ad0e0c916a51, 0x4ee70bee2660ea6b, 0xbe7e4e391b7394fd

dalign
dhp4k16:
	dq	64, .data, 0, 0
align 16
.data:	dq	0xdadca873c8b330db, 0xd047bccbd13f0ee2, 0xfca2f2ae99f65bcc, 0x8535b7f81915c1df, 0x7f83846b432e064b, 0xa103dce7f37c8c57, 0x2dfd0b000512f1a3, 0x890f34e2b6519fe, 0xdadb30c6ef0e9d29, 0x6d62ce85bb8fee4f, 0xc0fee7f70d39a697, 0x62ca6242d97f47cf, 0xfd6ae704ce4b6df, 0xebd39a229d353a39, 0x20feb4bf48949f36, 0xfc094ca2007b8e21, 0x22f0ad3f93e7be6b, 0x283f1bd96f3169f, 0x26407466f230cd8c, 0x2e1a2a1498055974, 0x1592c05fe4ad70fc, 0xdf6206028adbb4ea, 0xdf92411ed45db57, 0x63fac88aa4ee7d3e, 0xd7e3fa59e343751, 0x6f39f2d50a232b3a, 0x40d2aee4ac7d753, 0xb83d4d6cae4b2895, 0x2cd14c8d2e2b44fa, 0x5b281a1fd29dd454, 0x90017e75958636, 0xbd02d1dc961af659, 0xcd53287b7cac303b, 0x4d7e41d80695906c, 0x8b5e508e543d8e45, 0x21bea9ae2b62c26e, 0xf59473f2fec85a76, 0xc65ab354fcb33087, 0xac0e911349186f95, 0x1553ebb06c4ca2c6, 0x6dc5c74359b45159, 0x40c8e2b034db1411, 0x49ee9cf00a6e0f43, 0x2b69353c018e1bdc, 0xc959ce5673d8ccaa, 0xb98dec78cc69c6b4, 0x688f3bf221d99803, 0xe1d945c784e0389a, 0x9e0975527a8294c0, 0x31f4dea0725a19eb, 0x40ecef31dd9d8b03, 0x2a59a7d7b5aa482f, 0xab2f4e446fcf09e9, 0x7a88d65bbee9e428, 0xd81e0a1f45480039, 0x5e479bbb25456a97, 0xd33079c36ce5cc85, 0xe00961fd4ce9ed65, 0xe1a972a239791939, 0x12a174ff59b282e9, 0xb1406154cfcb715a, 0xfd213eed08829222, 0x344548b4f6948177, 0xe88419834bc6ff08

dalign
dhp4k17:
        dq      64, .data, 0, 0
align 16
.data:  dq      0x8b559de0c1a5b007, 0xfc19f28e2dcccb0e, 0x801754b19f348aa2, 0xf6c520ab1a26b143, 0x47c34b427dc8cbe8, 0xa0e9b181d2632db9, 0x9e99278fb65d0129, 0xfa79ee773bbe05ee, 0x48e617e17fe97bc1, 0xf19a8fcd4b72d793, 0x36c99b6365b1604e, 0x3e8a07ae50a2abf2, 0xa86b54bf28b364d7, 0x9c8d76e119f500d7, 0x34cdc2d5b1818ad9, 0x5d680c50be6dc2ca, 0x376380dce5116a08, 0xf72257ac25c4cb96, 0x5b50bbd17c30700e, 0xeee89d876cb042c4, 0xc6667d0baef43256, 0xf9aa65baa3b71754, 0x33250fb2eaed983d, 0x31ec746239076275, 0x7d23266314530316, 0x6c439877924b904e, 0x3a43677c7ecbac6e, 0xa852dd272c22394a, 0xb6a67171c7371cf3, 0x7788b656ad36bb4f, 0x21fd30814165dd7b, 0x31ccd5914f5fac8a, 0x66d0964829cf741a, 0x1fbf410e88eabcc3, 0xca43720ca6b28de6, 0x9aa842b5b523dfa6, 0x2673e7e5b9d07219, 0x995eb869e53b305, 0x69bd36b1cf0f795, 0xb8576937f24a9560, 0x8f81ba8fe90fa982, 0xc3e9da33e952f50e, 0x740ebf5834cd660a, 0xd75e148b6a02accb, 0xb7b57a4fdac367d8, 0xe30c7ec6c31f664e, 0xd42912f90339be2f, 0x63a63c4431829661, 0xfc6c154f67eae61, 0x89f2f64fc79b838, 0xd8fa0ecbded4f01e, 0xe7f78d7fbf4f6164, 0x87f6fea24abf55c3, 0xe0eef5d131673746, 0xf9b6804d1934e50, 0xc61f488987b02dc0, 0x318d07be43e69598, 0x33e69a828be1e186, 0x7d82cfc52acf560f, 0x3f0b87a4c2847f94, 0x98a530a24bb5957, 0xd289ddd482bafe4, 0x3effed5f68de8f3f, 0xb4289124784c267a

dalign
dhp4k18:
        dq      64, .data, 0, 0
align 16
.data:  dq      0xd73f433ee525185b, 0x88b74aa7b54fcb04, 0xba5ac467178ff938, 0x1070666992a125f7, 0x7daf7fd1952e6f6c, 0x391af84660f7faf3, 0xb4204d894d62a422, 0xbbb8d57855b74b6c, 0x41afa0b7a63da899, 0x47dda198262a9210, 0x60c8da098e0224f4, 0x6c1f7e4454bb443, 0xa0f45d68d3e09b80, 0xc9b8750fb04f91a3, 0xeb5cf352bb31827b, 0x503f9f1be6b3e336, 0x57e5d865e2d53248, 0x154bbc1c80876463, 0xdd875c5972e4e914, 0x23067ddbeca2e8ff, 0xebf6a11619c852e0, 0xeaa8064836bb4f4, 0xa768039249b79636, 0x26bdcbe5d2caf6fc, 0xe8c0556aa6865552, 0xa1b69f656e27bc3e, 0x5cbd21f942b97ec1, 0x5f44cac52f8688e, 0xc0ff1970c21cdb8d, 0xfcd55b33efd4af31, 0xac56b0605aa4dd16, 0xc53cf524cd79435f, 0x6b5a67a57cee2309, 0x6021bfcebf717266, 0xd2f2828a7ff303cb, 0x3f2795ef43f6bcdf, 0x8f79bbd56df93251, 0x56d8cc574bd9bed4, 0x645727edc7633ef9, 0x44ed122c4ea49500, 0x40fba0171e920d1f, 0x99065878da973ec9, 0x907fcd8426f49539, 0x23278b023323c521, 0xac0023fa0fc73126, 0x24e33991552a8d6f, 0x51f076d1a71f218, 0xfbd0ea2eb58ca8d2, 0x4bacc76c8daf5b8d, 0x75981564f800940a, 0xfe667b5577ffa4f0, 0xc097b2fc28050cfa, 0x8647a20fc97db50, 0xbfe16145d32b4716, 0xbd13ae3626a303c1, 0xbd01d0c27c007d22, 0x9fb7646499c1288d, 0xaecec9bd445fb687, 0x11666d3fbcb5893d, 0xef2950bc8ee5bb33, 0xa8ae783e88964d1d, 0x254514d8725f762e, 0x302965a4c93fbb9c, 0x804882bb4893f970

dalign
dhp4k19:
        dq      64, .data, 0, 0
align 16
.data:  dq      0x8288422d4915a4bb, 0xea9346b4ba177f43, 0x1e05e09d927e57, 0xaa49dc7f1ffac320, 0xb09b85ba855d90d5, 0x4f7acd9d5cfc8354, 0x14f6d031e5f0f3cc, 0x90eca1c0ed3d1a01, 0xb8e381f610e408b4, 0x7e40ec0216a8c09c, 0xfe23b2e0371c1039, 0x2f0b7379125a712b, 0x6149e8930c83d547, 0xfde639abfac6ff0e, 0xc1e780f264b3e6be, 0xf72069d7679ccf94, 0x42df5e7679b52da0, 0xb4d36fd701811947, 0xd5d80edc1da47cf9, 0xe546a65367455dfc, 0x61fe526a9f86c32d, 0x9438b962d0ee1c8c, 0xf55632773a42ba40, 0x8ed03806faca7756, 0xa1f17cc2297b4778, 0x68f9fd706ba2daad, 0xf5bd6b746607c0e5, 0xb377e9161f0c351b, 0x8f19d461a9574a6b, 0xf0d601d2ad6e5e71, 0x4c3d0bf5c8a54e35, 0x20591bd3f036ce92, 0xbb4d57f43ca6b26f, 0xb41dafb924bc4781, 0xf1ecd800fd414b5f, 0x7d6cf3319dfffab4, 0x3fd14a3fecf228f4, 0xb8a6dca1605cbd31, 0xc78e44ae36e9f3e6, 0x751904bb080671c5, 0x69e407ac0bde905a, 0xacd522cb818613e9, 0x18fab04771be58aa, 0x210abba1e8c9e690, 0x9599135a3b1aa1ec, 0xeb029331ee7cd0b8, 0x1e3686ba7fb3b195, 0x668e73fb220fd68, 0x72f2c4d8b95bd01f, 0x9b6a9941bc89d469, 0x6b01f63c7b5fa841, 0x173ccb33e5e73687, 0x17421781b0db058, 0x6e5de6f387f294ad, 0xa2e94ba64d7f1de6, 0xd4337f1dc43b4254, 0xfd5feff6a7e51af2, 0x24a15bee03117623, 0xe6c98f54d63a49cd, 0x1810a074414270b6, 0x91b453314da4d477, 0x4026eea1a97948a3, 0xf43bc5b7afcf31c7, 0xa7cd5e41dabdffda

dalign
dhp4k20:
        dq      64, .data, 0, 0
align 16
.data:  dq      0xb21e25a98188efcb, 0x2c956406cda6a28, 0x901733087de73717, 0x65c9434e86f74d78, 0x7fb4dfbae8ab72a4, 0xd694215b813e1f95, 0xd45869b46202bdac, 0xc250b5eeab4f400e, 0x8a8a083d87ec2b06, 0x52767e754f4d83e7, 0xbc28592fa637d4f6, 0xbc1fda526963fcc0, 0xd447fdfd200cf0e1, 0xcb2c060b8e4b808a, 0x731105a76c7eb36, 0xa0dd60afc64b1abf, 0x7a19e18fdeb61787, 0xedc4fed07edbcdce, 0xe21a4d2b1a3327bd, 0x937fa7a92c8604a, 0x7461481f881b635b, 0x64931ba28dbc6fc6, 0x500d27ad9c8c59a1, 0x7d10d1f2009958f6, 0x67fa6c5ada4ca6bd, 0x6d91457a714d4016, 0xf7f75fe9c4602aa5, 0x4ded2f55c2ac59b6, 0x95e157731c2a4786, 0x2b61df3c71eb4f37, 0x5c1553358dd12912, 0x71ce669c8090bee, 0x63b3cccb95e5d14a, 0xf48f9cabe383e680, 0x33f5c255c171dd4, 0x45acd3fae28a26b5, 0x6ecd0b960dcd3e70, 0xb814c6dc8f76609c, 0x4d8ca937776ba48f, 0x86b1851c62a1e584, 0x9fe283b0cbf9b1cb, 0x21c29b8b81dca943, 0x4b8b8c2540356d8a, 0x50ffc2af0d056d7c, 0x65319caeea88bd36, 0xaf1f7060059b9a5d, 0x97b9060f10b4e777, 0xefc9f6d461f2db8d, 0x118cdd6e1b0bdfe5, 0x66e5a27297e747bf, 0x59eef8b719b8a409, 0xea0b64d95f54210b, 0x1b8b837b27d10930, 0x87df12f1a4b070a, 0xd55a9356ff3c0028, 0x3221cf8fea5be1cf, 0x519b81ee924b7575, 0x7c1f8379eff494f4, 0xe46123d50a50f81f, 0x85838741a4cfbdab, 0x7c679565f728995d, 0x399c87a50c163a17, 0xbb648c17e729e71, 0xf9d5950515bf50ee

end if