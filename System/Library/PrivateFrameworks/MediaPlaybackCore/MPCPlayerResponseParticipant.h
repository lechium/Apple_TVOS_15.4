//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/NSObject-Protocol.h>

@class MPCPlayerResponse, MPModelSharedListeningParticipant, NSString;

@interface MPCPlayerResponseParticipant : NSObject <NSObject>
{
    NSString *_contentItemIdentifier;	// 8 = 0x8
    MPCPlayerResponse *_response;	// 16 = 0x10
    MPModelSharedListeningParticipant *_modelObject;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000001b73bd
@property(readonly, nonatomic) MPModelSharedListeningParticipant *modelObject; // @synthesize modelObject=_modelObject;
@property(readonly, nonatomic) __weak MPCPlayerResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSString *contentItemIdentifier; // @synthesize contentItemIdentifier=_contentItemIdentifier;
- (id)_stateDumpObject;	// IMP=0x00000000001b72bc
@property(readonly, copy) NSString *description;
- (id)initWithModelObject:(id)arg1 response:(id)arg2;	// IMP=0x00000000001b7193

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

