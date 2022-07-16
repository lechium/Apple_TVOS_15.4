//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString;

@interface AXMTaxonomyNode : NSObject
{
    unsigned int _sceneClassId;	// 8 = 0x8
    NSString *_label;	// 16 = 0x10
    NSString *_localizedName;	// 24 = 0x18
    double _confidence;	// 32 = 0x20
    NSMutableSet *_detectorSceneClassIds;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000034daa
@property(retain, nonatomic) NSMutableSet *detectorSceneClassIds; // @synthesize detectorSceneClassIds=_detectorSceneClassIds;
@property(nonatomic) unsigned int sceneClassId; // @synthesize sceneClassId=_sceneClassId;
@property(nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(retain, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;

@end
