//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ConfigurationEngineModel/CEMRegisteredTypeProtocol-Protocol.h>

@class NSNumber, NSString;

@interface CEMSystemRatingsDeclaration <CEMRegisteredTypeProtocol>
{
    NSString *_payloadRatingRegion;	// 16 = 0x10
    NSNumber *_payloadRatingApps;	// 24 = 0x18
    NSNumber *_payloadRatingMovies;	// 32 = 0x20
    NSNumber *_payloadRatingTVShows;	// 40 = 0x28
    NSNumber *_payloadAllowExplicitContent;	// 48 = 0x30
    NSNumber *_payloadAllowShowingUndownloadedTV;	// 56 = 0x38
    NSNumber *_payloadAllowShowingUndownloadedMovies;	// 64 = 0x40
}

+ (id)buildRequiredOnlyWithIdentifier:(id)arg1;	// IMP=0x00000000000c2523
+ (id)buildWithIdentifier:(id)arg1 withRatingRegion:(id)arg2 withRatingApps:(id)arg3 withRatingMovies:(id)arg4 withRatingTVShows:(id)arg5 withAllowExplicitContent:(id)arg6 withAllowShowingUndownloadedTV:(id)arg7 withAllowShowingUndownloadedMovies:(id)arg8;	// IMP=0x00000000000c22d6
+ (id)restrictionPayloadKeys;	// IMP=0x00000000000c21c9
+ (id)allowedPayloadKeys;	// IMP=0x00000000000c20e4
+ (id)profileType;	// IMP=0x00000000000c20d7
+ (id)registeredIdentifier;	// IMP=0x00000000000c20ca
+ (id)registeredClassName;	// IMP=0x00000000000c20bd
- (void).cxx_destruct;	// IMP=0x00000000000c2e01
@property(copy, nonatomic) NSNumber *payloadAllowShowingUndownloadedMovies; // @synthesize payloadAllowShowingUndownloadedMovies=_payloadAllowShowingUndownloadedMovies;
@property(copy, nonatomic) NSNumber *payloadAllowShowingUndownloadedTV; // @synthesize payloadAllowShowingUndownloadedTV=_payloadAllowShowingUndownloadedTV;
@property(copy, nonatomic) NSNumber *payloadAllowExplicitContent; // @synthesize payloadAllowExplicitContent=_payloadAllowExplicitContent;
@property(copy, nonatomic) NSNumber *payloadRatingTVShows; // @synthesize payloadRatingTVShows=_payloadRatingTVShows;
@property(copy, nonatomic) NSNumber *payloadRatingMovies; // @synthesize payloadRatingMovies=_payloadRatingMovies;
@property(copy, nonatomic) NSNumber *payloadRatingApps; // @synthesize payloadRatingApps=_payloadRatingApps;
@property(copy, nonatomic) NSString *payloadRatingRegion; // @synthesize payloadRatingRegion=_payloadRatingRegion;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c2bde
- (id)serializePayloadWithAssetProviders:(id)arg1;	// IMP=0x00000000000c2a54
- (_Bool)loadPayload:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c260a
- (id)assetReferences;	// IMP=0x00000000000c22c9
- (int)activationLevel;	// IMP=0x00000000000c22be
- (_Bool)mustBeSupervised;	// IMP=0x00000000000c22b6
- (_Bool)multipleAllowed;	// IMP=0x00000000000c22ae

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

