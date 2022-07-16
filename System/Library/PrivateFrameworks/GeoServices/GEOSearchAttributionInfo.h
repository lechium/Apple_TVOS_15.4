//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class GEOSearchAttributionSource, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOSearchAttributionInfo : NSObject <NSSecureCoding>
{
    GEOSearchAttributionSource *_source;	// 8 = 0x8
    NSArray *_logoPaths;	// 16 = 0x10
    NSArray *_snippetLogoPaths;	// 24 = 0x18
    NSString *_displayName;	// 32 = 0x20
    NSString *_captionDisplayName;	// 40 = 0x28
    unsigned int _attributionRequirementsMask;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000001056318
- (void).cxx_destruct;	// IMP=0x0000000001056f59
@property(readonly, nonatomic) GEOSearchAttributionSource *source; // @synthesize source=_source;
@property(readonly, nonatomic) unsigned int requirementsMask; // @synthesize requirementsMask=_attributionRequirementsMask;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *captionDisplayName; // @synthesize captionDisplayName=_captionDisplayName;
- (void)addLogoPath:(id)arg1;	// IMP=0x0000000001056ea1
- (id)snippetLogoPathForScale:(double)arg1;	// IMP=0x0000000001056b7d
- (id)logoPathForScale:(double)arg1;	// IMP=0x0000000001056859
- (_Bool)hasAttributionRequirement:(int)arg1;	// IMP=0x000000000105684a
- (id)description;	// IMP=0x000000000105679b
- (id)dictionaryRepresentation;	// IMP=0x00000000010565e2
- (_Bool)supportsActionURLs;	// IMP=0x0000000001056320
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000001056212
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000001055fd6
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000001055dad
@property(readonly, nonatomic) NSString *appAdamID;
@property(readonly, nonatomic) _Bool shouldOpenInAppStore;
@property(readonly, nonatomic) NSString *webBaseActionURL;
@property(readonly, nonatomic) NSArray *attributionApps;
@property(readonly, nonatomic) unsigned int version;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithSource:(id)arg1 localizedAttribution:(id)arg2 logoPaths:(id)arg3 snippetLogoPaths:(id)arg4;	// IMP=0x0000000001055b3a

@end
