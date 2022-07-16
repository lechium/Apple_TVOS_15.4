//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPModelResponse.h>

@class MPCModelGenericAVItemTimedMetadataStreamFields, MPSectionedCollection, NSData;

__attribute__((visibility("hidden")))
@interface MPCModelGenericAVItemTimedMetadataResponse : MPModelResponse
{
    MPModelResponse *_personalizationResponse;	// 8 = 0x8
    _Bool _firstResponse;	// 16 = 0x10
    _Bool _finalResponse;	// 17 = 0x11
    NSData *_adamIDData;	// 24 = 0x18
    MPCModelGenericAVItemTimedMetadataStreamFields *_streamFields;	// 32 = 0x20
    MPSectionedCollection *_unpersonalizedContentDescriptors;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000005fc65
@property(copy, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors; // @synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors;
@property(retain, nonatomic) MPCModelGenericAVItemTimedMetadataStreamFields *streamFields; // @synthesize streamFields=_streamFields;
@property(copy, nonatomic) NSData *adamIDData; // @synthesize adamIDData=_adamIDData;
@property(nonatomic, getter=isFinalResponse) _Bool finalResponse; // @synthesize finalResponse=_finalResponse;
@property(nonatomic, getter=isFirstResponse) _Bool firstResponse; // @synthesize firstResponse=_firstResponse;
- (void)_personalizationResponseDidInvalidateNotification:(id)arg1;	// IMP=0x000000000005fbaa
- (void)dealloc;	// IMP=0x000000000005fb15
- (id)initWithRequest:(id)arg1 personalizationResponse:(id)arg2 firstResponse:(_Bool)arg3 finalResponse:(_Bool)arg4;	// IMP=0x000000000005f9c1

@end

