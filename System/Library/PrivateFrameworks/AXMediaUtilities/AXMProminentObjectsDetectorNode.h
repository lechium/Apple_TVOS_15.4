//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNGenerateAttentionBasedSaliencyImageRequest;

@interface AXMProminentObjectsDetectorNode
{
    VNGenerateAttentionBasedSaliencyImageRequest *__imageSaliencyRequest;	// 8 = 0x8
}

+ (id)title;	// IMP=0x00000000000705c6
+ (_Bool)isSupported;	// IMP=0x00000000000705b6
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000070550
- (void).cxx_destruct;	// IMP=0x0000000000070b98
@property(retain, nonatomic) VNGenerateAttentionBasedSaliencyImageRequest *_imageSaliencyRequest; // @synthesize _imageSaliencyRequest=__imageSaliencyRequest;
- (void)evaluate:(id)arg1 metrics:(id)arg2;	// IMP=0x00000000000706f8
- (_Bool)validateVisionKitSoftLinkSymbols;	// IMP=0x00000000000705d3
- (_Bool)requiresVisionFramework;	// IMP=0x00000000000705be
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000070587
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000070558
- (void)nodeInitialize;	// IMP=0x0000000000070521

@end

