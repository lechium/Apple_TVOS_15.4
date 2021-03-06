//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class VNSceneClassificationRequest;

@interface AXMSceneDetectorNode
{
    unsigned int _taxonomyOptions;	// 8 = 0x8
    VNSceneClassificationRequest *__sceneClassificationRequest;	// 16 = 0x10
}

+ (id)possibleSceneClassifications;	// IMP=0x000000000008627f
+ (id)title;	// IMP=0x0000000000086272
+ (_Bool)isSupported;	// IMP=0x0000000000086220
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000086122
- (void).cxx_destruct;	// IMP=0x000000000008670e
@property(retain, nonatomic, setter=_setSceneClassificationRequest:) VNSceneClassificationRequest *_sceneClassificationRequest; // @synthesize _sceneClassificationRequest=__sceneClassificationRequest;
@property(nonatomic) unsigned int taxonomyOptions; // @synthesize taxonomyOptions=_taxonomyOptions;
- (_Bool)_shouldIncludeSceneLabelForOCRDocumenTypeDetection:(id)arg1;	// IMP=0x00000000000865e2
- (void)evaluate:(id)arg1 metrics:(id)arg2;	// IMP=0x0000000000086562
- (_Bool)validateVisionKitSoftLinkSymbols;	// IMP=0x00000000000864ef
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000861a3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008612a

@end

