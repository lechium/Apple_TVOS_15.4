//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ETDataPointDictionary : NSObject
{
    map_74c237bc _image_buffers;	// 8 = 0x8
    map_244aa760 _float_buffers;	// 32 = 0x20
}

- (id).cxx_construct;	// IMP=0x00000000005f01d0
- (void).cxx_destruct;	// IMP=0x00000000005f01a8
@property map_244aa760 float_buffers; // @synthesize float_buffers=_float_buffers;
@property map_74c237bc image_buffers; // @synthesize image_buffers=_image_buffers;
- (id)dataArrayForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005effcc
- (float *)dataForKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005eff29
- (_Bool)setData:(float *)arg1 size:(unsigned long long)arg2 forKey:(id)arg3 freeWhenDone:(_Bool)arg4;	// IMP=0x00000000005efe11
- (_Bool)setImage:(struct vImage_Buffer)arg1 forKey:(id)arg2;	// IMP=0x00000000005efd4d

@end

