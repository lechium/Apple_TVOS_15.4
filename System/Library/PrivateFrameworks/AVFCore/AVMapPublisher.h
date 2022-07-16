//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPublisher;

@interface AVMapPublisher
{
    AVPublisher *_upstream;	// 8 = 0x8
    CDUnknownBlockType _transform;	// 16 = 0x10
}

+ (id)mapPublisherWithUpstream:(id)arg1 transform:(CDUnknownBlockType)arg2;	// IMP=0x000000000007f67b
- (id)description;	// IMP=0x000000000007f79d
- (id)subscribeRequestingInitialValue:(_Bool)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x000000000007f70e
- (void)dealloc;	// IMP=0x000000000007f6b6
- (id)initWithUpstream:(id)arg1 transform:(CDUnknownBlockType)arg2;	// IMP=0x000000000007f5f0

@end

