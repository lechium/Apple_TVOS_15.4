//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSError;
@protocol MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

@interface MPServerObjectDatabaseImportResult : NSObject
{
    id _annotatedPayload;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    id <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> _trustID;	// 24 = 0x18
    NSArray *_playableAssetIdentifiers;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00000000000881e0
@property(readonly, nonatomic) NSArray *playableAssetIdentifiers; // @synthesize playableAssetIdentifiers=_playableAssetIdentifiers;
@property(readonly, copy, nonatomic) id <MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> trustID; // @synthesize trustID=_trustID;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) id annotatedPayload; // @synthesize annotatedPayload=_annotatedPayload;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000881ad
- (id)initWithAnnotatedPayload:(id *)arg1 playableAssetIdentifiers:(id)arg2 trustID:(id)arg3 error:(id)arg4;	// IMP=0x000000000008806a

@end

