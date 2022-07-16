//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface VCDatagramChannelManager : NSObject
{
    struct _opaque_pthread_mutex_t _stateLock;	// 8 = 0x8
    unsigned int _nextToken;	// 72 = 0x48
    CDUnknownBlockType _readHandler;	// 80 = 0x50
    NSMutableDictionary *_datagramChannels;	// 88 = 0x58
    NSMutableDictionary *_destinations;	// 96 = 0x60
}

+ (id)sharedInstance;	// IMP=0x000000000008069f
@property(copy) CDUnknownBlockType readHandler; // @synthesize readHandler=_readHandler;
- (void)removeDatagramChannel:(id)arg1;	// IMP=0x00000000000813b1
- (void)executeBlockForIDSDestination:(id)arg1 blockToExecute:(CDUnknownBlockType)arg2;	// IMP=0x00000000000812db
- (id)datagramChannelWithChannelToken:(unsigned int)arg1;	// IMP=0x0000000000081278
- (_Bool)setupDatagramChannel:(id)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00000000000810ec
- (id)setupEmulatedDatagramChannelWithDestination:(id)arg1 datagramChannel:(id)arg2;	// IMP=0x0000000000080f21
- (id)addDatagramChannelWithDestination:(id)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x0000000000080a71
- (id)addDatagramChannelWithDescriptor:(int)arg1 eventHandler:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00000000000807f1
- (void)dealloc;	// IMP=0x0000000000080774
- (id)init;	// IMP=0x00000000000806e4

@end

