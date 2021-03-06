//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TVHKDMAPParsingUtilities : NSObject
{
}

+ (id)facesFromTagPayload:(id)arg1;	// IMP=0x00000000000225c4
+ (id)faceFromTagPayload:(id)arg1;	// IMP=0x00000000000221e1
+ (id)movieInfoFromTagPayload:(id)arg1;	// IMP=0x0000000000021e5a
+ (id)_mediaKindItemFromTagPayload:(id)arg1;	// IMP=0x0000000000021cbd
+ (id)mediaKindItemsFromTagPayload:(id)arg1;	// IMP=0x0000000000021b00
+ (id)stringFromBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000021ab3
+ (id)stringFromData:(id)arg1;	// IMP=0x0000000000021a38
+ (id)dateFromBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000219fb
+ (id)dateFromData:(id)arg1;	// IMP=0x0000000000021980
+ (id)numberFromBuffer:(const char *)arg1 length:(unsigned long long)arg2 isSigned:(_Bool)arg3;	// IMP=0x0000000000021816
+ (id)numberFromBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000021801
+ (id)numberFromData:(id)arg1 isSigned:(_Bool)arg2;	// IMP=0x000000000002177f
+ (id)numberFromData:(id)arg1;	// IMP=0x000000000002176b
+ (double)timeIntervalFromBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000002170c
+ (double)timeIntervalFromData:(id)arg1;	// IMP=0x0000000000021691
+ (float)float32FromBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000021653
+ (float)float32FromData:(id)arg1;	// IMP=0x00000000000215d8
+ (long long)signedInt64FromBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000215c6
+ (long long)signedInt64FromData:(id)arg1;	// IMP=0x000000000002154b
+ (unsigned long long)unsignedInt64FromBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x0000000000021537
+ (unsigned long long)unsignedInt64FromData:(id)arg1;	// IMP=0x00000000000214bc
+ (int)signedInt32FromBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x00000000000214aa
+ (int)signedInt32FromData:(id)arg1;	// IMP=0x000000000002142f
+ (unsigned int)unsignedInt32FromBuffer:(const char *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000002141d
+ (unsigned int)unsignedInt32FromData:(id)arg1;	// IMP=0x00000000000213a2
+ (id)taggedDataForCode:(unsigned int)arg1 data:(id)arg2;	// IMP=0x00000000000212e6
+ (const char *)taggedBufferForCode:(unsigned int)arg1 buffer:(const char *)arg2 bufferLength:(unsigned long long)arg3 outTaggedBufferLength:(unsigned long long *)arg4;	// IMP=0x00000000000211e9
+ (void)parseTaggedData:(id)arg1 tagParsingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000002103c
+ (void)parseTaggedBuffer:(const char *)arg1 bufferLength:(unsigned long long)arg2 tagParsingBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000020f38

@end

