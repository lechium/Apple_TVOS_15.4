//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CSAudioTimeConverterPool : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_pool;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000001b00
- (void).cxx_destruct;	// IMP=0x0000000000001f07
@property(retain, nonatomic) NSMutableDictionary *pool; // @synthesize pool=_pool;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_getAudioTimeConverterWithAudioStreamId:(unsigned long long)arg1;	// IMP=0x0000000000001c05
- (id)converterForAudioStreamId:(unsigned long long)arg1;	// IMP=0x0000000000001bf3
- (id)defaultConverter;	// IMP=0x0000000000001bdc
- (id)init;	// IMP=0x0000000000001b55

@end
