//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPTLVBase.h>

#import <HomeKitDaemon/HAPTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDVideoResolution, NSNumber;

@interface HMDVideoAttributes : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>
{
    NSNumber *_imageWidth;	// 8 = 0x8
    NSNumber *_imageHeight;	// 16 = 0x10
    HMDVideoResolution *_videoResolution;	// 24 = 0x18
    NSNumber *_framerate;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006b6a0
+ (_Bool)translateImageResolution:(id)arg1 imageWidth:(id *)arg2 imageHeight:(id *)arg3;	// IMP=0x000000000006b433
- (void).cxx_destruct;	// IMP=0x000000000006b3e0
@property(readonly, copy, nonatomic) NSNumber *framerate; // @synthesize framerate=_framerate;
@property(readonly, copy, nonatomic) HMDVideoResolution *videoResolution; // @synthesize videoResolution=_videoResolution;
@property(readonly, copy, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, copy, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000006b2b9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000006b00a
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000006ae4f
- (id)tlvData;	// IMP=0x000000000006ad3d
- (_Bool)_parseFromTLVData;	// IMP=0x000000000006ab4c
- (id)translateImageWidth:(id)arg1 imageHeight:(id)arg2;	// IMP=0x000000000006a4a7
- (id)initWithResolution:(id)arg1 framerate:(id)arg2;	// IMP=0x000000000006a30e

@end

