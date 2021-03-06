//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray;

@interface CalDAVGetDelegatesTaskGroup
{
    int _state;	// 88 = 0x58
    NSMutableArray *_nestedGroupPrincipalURLs;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000323f4
@property(retain, nonatomic) NSMutableArray *nestedGroupPrincipalURLs; // @synthesize nestedGroupPrincipalURLs=_nestedGroupPrincipalURLs;
@property(nonatomic) int state; // @synthesize state=_state;
- (void)taskGroup:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x0000000000032163
- (void)task:(id)arg1 didFinishWithError:(id)arg2;	// IMP=0x00000000000317e2
- (void)startTaskGroup;	// IMP=0x0000000000031763
- (void)_getChildProperties;	// IMP=0x00000000000315f1
- (void)_getGroupMembershipForURL:(id)arg1 state:(int)arg2;	// IMP=0x0000000000031447
- (void)_expandProperties;	// IMP=0x00000000000312bc
- (void)_finishWithError:(id)arg1 state:(int)arg2;	// IMP=0x0000000000031134
- (id)initWithAccountInfoProvider:(id)arg1 principalURL:(id)arg2 taskManager:(id)arg3;	// IMP=0x00000000000310a5

@end

