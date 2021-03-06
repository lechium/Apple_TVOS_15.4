//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BiomeStreams/BPSCancellable-Protocol.h>

@class BMComputeXPCPublisherClient, NSString;

@interface _BMCancellableClientSubscriber : NSObject <BPSCancellable>
{
    BMComputeXPCPublisherClient *_client;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000009cf6b
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) BMComputeXPCPublisherClient *client; // @synthesize client=_client;
- (void)cancel;	// IMP=0x000000000009cec7
- (id)initWithClient:(id)arg1 identifier:(id)arg2;	// IMP=0x000000000009ce1c

@end

