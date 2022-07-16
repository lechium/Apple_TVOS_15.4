//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOBusinessInfoModuleConfiguration, GEOButtonModuleConfiguration, GEOHeaderButtonModuleConfiguration, GEOPDModuleConfiguration, GEOPlaceDetailsModuleConfiguration, GEOPlaceRibbonConfiguration, GEORelatedPlaceModuleConfiguration, GEOWebContentModuleConfiguration;

@interface GEOModuleConfiguration : NSObject
{
    GEOPDModuleConfiguration *_moduleConfig;	// 8 = 0x8
}

+ (id)moduleConfigurationForURL:(id)arg1;	// IMP=0x00000000009d7668
- (void).cxx_destruct;	// IMP=0x00000000009d7771
- (id)description;	// IMP=0x00000000009d775b
- (void)_logNoModuleConfigMatchForType;	// IMP=0x00000000009d7535
@property(readonly, nonatomic) GEOPlaceDetailsModuleConfiguration *placeDetailsConfig;
@property(readonly, nonatomic) GEOBusinessInfoModuleConfiguration *businessInfoConfig;
@property(readonly, nonatomic) GEOHeaderButtonModuleConfiguration *headerButtonConfig;
@property(readonly, nonatomic) GEOButtonModuleConfiguration *actionButtonConfig;
@property(readonly, nonatomic) GEOPlaceRibbonConfiguration *placeRibbonConfig;
@property(readonly, nonatomic) GEORelatedPlaceModuleConfiguration *relatedPlaceConfig;
@property(readonly, nonatomic) GEOWebContentModuleConfiguration *webContentConfig;
@property(readonly, nonatomic) int type;
- (id)initWithModuleConfiguration:(id)arg1;	// IMP=0x00000000009d7019

@end
