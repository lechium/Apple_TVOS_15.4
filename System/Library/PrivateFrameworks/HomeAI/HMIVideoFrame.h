//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/HMIVideoEvent-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface HMIVideoFrame : HMFObject <HMIVideoEvent, HMFLogging, NSSecureCoding>
{
    long long _store;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    struct __CVBuffer *_pixelBuffer;	// 24 = 0x18
    struct CGSize _size;	// 32 = 0x20
    CDStruct_1b6d18a9 _presentationTimeStamp;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000baa23
+ (id)logCategory;	// IMP=0x00000000000b9e9c
- (void).cxx_destruct;	// IMP=0x00000000000bab3e
@property(readonly) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(readonly) CDStruct_1b6d18a9 presentationTimeStamp; // @synthesize presentationTimeStamp=_presentationTimeStamp;
@property(readonly) struct CGSize size; // @synthesize size=_size;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000baa78
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000baa2b
@property(readonly) CDStruct_1b6d18a9 time;
- (id)attributeDescriptions;	// IMP=0x00000000000ba840
- (void)dealloc;	// IMP=0x00000000000ba7fa
- (void)printWithScale:(double)arg1;	// IMP=0x00000000000ba6c9
- (void)printWithHeight:(unsigned long long)arg1;	// IMP=0x00000000000ba66c
@property(readonly) NSData *data; // @synthesize data=_data;
- (id)pixelBufferFrameWithError:(id *)arg1;	// IMP=0x00000000000ba4a5
- (id)compressedFrameWithScale:(double)arg1 quality:(double)arg2 error:(id *)arg3;	// IMP=0x00000000000ba193
- (id)base64Encoded;	// IMP=0x00000000000ba13e
- (id)redactedCopy;	// IMP=0x00000000000ba07b
- (id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;	// IMP=0x00000000000ba019
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2;	// IMP=0x00000000000b9f79
- (id)initWithJPEGData:(id)arg1 size:(struct CGSize)arg2 presentationTimeStamp:(CDStruct_1b6d18a9)arg3;	// IMP=0x00000000000b9ea6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
