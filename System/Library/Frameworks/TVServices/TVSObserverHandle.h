//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVServices/BSInvalidatable-Protocol.h>

@class NSString, TVSObserverSet;

@interface TVSObserverHandle : NSObject <BSInvalidatable>
{
    _Atomic _Bool _valid;	// 8 = 0x8
    TVSObserverSet *_set;	// 16 = 0x10
    unsigned long long _targetPtr;	// 24 = 0x18
    id _userInfo;	// 32 = 0x20
}

+ (_Bool)isValidHandleSubclass:(Class)arg1 invalidReason:(id *)arg2;	// IMP=0x00000000000485a5
- (void).cxx_destruct;	// IMP=0x00000000000487c7
@property(readonly, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, nonatomic) unsigned long long targetPtr; // @synthesize targetPtr=_targetPtr;
@property(readonly, nonatomic) __weak TVSObserverSet *set; // @synthesize set=_set;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000048744
@property(readonly) unsigned long long hash;
- (void)invalidate;	// IMP=0x000000000004871c
- (void)invalidateWithOptions:(unsigned long long)arg1;	// IMP=0x00000000000486b6
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)initWithOwningSet:(id)arg1 target:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000000484ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

