//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSString;

@interface HMICameraVideoFrame : HMFObject <NSSecureCoding, HMFLogging>
{
    unsigned long long _frameId;	// 8 = 0x8
    unsigned long long _fragmentSequenceNumber;	// 16 = 0x10
    struct __CVBuffer *_pixelBuffer;	// 24 = 0x18
    NSData *_jpegData;	// 32 = 0x20
    NSArray *_motionDetections;	// 40 = 0x28
    struct CGSize _size;	// 48 = 0x30
    CDStruct_1b6d18a9 _presentationTime;	// 64 = 0x40
}

+ (id)logCategory;	// IMP=0x000000000000fd7f
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000096885
- (void).cxx_destruct;	// IMP=0x000000000000fe61
@property(retain) NSArray *motionDetections; // @synthesize motionDetections=_motionDetections;
@property(readonly) NSData *jpegData; // @synthesize jpegData=_jpegData;
@property(readonly) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
@property(readonly) unsigned long long fragmentSequenceNumber; // @synthesize fragmentSequenceNumber=_fragmentSequenceNumber;
@property(readonly) unsigned long long frameId; // @synthesize frameId=_frameId;
@property(readonly) struct CGSize size; // @synthesize size=_size;
@property(readonly) CDStruct_1b6d18a9 presentationTime; // @synthesize presentationTime=_presentationTime;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x000000000000fc9e
- (id)initWithJPEGData:(id)arg1 presentationTime:(CDStruct_1b6d18a9)arg2 frameId:(unsigned long long)arg3 fragmentSequenceNumber:(unsigned long long)arg4 size:(struct CGSize)arg5;	// IMP=0x000000000000fbbc
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 presentationTime:(CDStruct_1b6d18a9)arg2 frameId:(unsigned long long)arg3 fragmentSequenceNumber:(unsigned long long)arg4;	// IMP=0x000000000000faec
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1;	// IMP=0x000000000000faa5
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009688d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000096838
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000967eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

