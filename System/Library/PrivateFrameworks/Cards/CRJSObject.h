//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Cards/CRJSObjectExport-Protocol.h>

@interface CRJSObject : NSObject <CRJSObjectExport>
{
    id _backingObject;	// 8 = 0x8
}

+ (id)objectWithClassName:(id)arg1 objectType:(id)arg2;	// IMP=0x000000000000985b
- (void).cxx_destruct;	// IMP=0x000000000000a01a
@property(readonly, nonatomic) id backingObject; // @synthesize backingObject=_backingObject;
- (id)_backingObjectForJSValue:(id)arg1;	// IMP=0x0000000000009c76
- (void)_logErrorLog:(id)arg1;	// IMP=0x0000000000009bca
- (id)backingObjectValueForKey:(id)arg1;	// IMP=0x0000000000009b0e
- (void)setBackingObjectValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000992c
- (id)initWithClassName:(id)arg1 objectType:(long long)arg2;	// IMP=0x0000000000009752

@end

