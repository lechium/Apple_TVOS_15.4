//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ICDispatchAfterHandler : NSObject
{
    NSMutableDictionary *_identifierBlockMap;	// 8 = 0x8
}

+ (id)appLifeCycleHandler;	// IMP=0x000000000001af57
- (void).cxx_destruct;	// IMP=0x000000000001b4b0
@property(retain, nonatomic) NSMutableDictionary *identifierBlockMap; // @synthesize identifierBlockMap=_identifierBlockMap;
- (void)cancelAll;	// IMP=0x000000000001b2e3
- (void)cancelBlocksWithStringIdentifier:(id)arg1;	// IMP=0x000000000001b21f
- (void)dispatchAfter:(double)arg1 stringIdentifier:(id)arg2 withBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000001b0c6
- (id)identifierForStringIdentifier:(id)arg1;	// IMP=0x000000000001b06f
- (id)init;	// IMP=0x000000000001b004

@end

