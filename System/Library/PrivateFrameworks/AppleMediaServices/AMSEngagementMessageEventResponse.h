//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface AMSEngagementMessageEventResponse
{
    NSArray *_messageActions;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000119f8b
@property(readonly, nonatomic) NSArray *messageActions; // @synthesize messageActions=_messageActions;
- (void)_processActions:(id)arg1;	// IMP=0x0000000000119ce1
- (id)initWithEnqueueResult:(id)arg1;	// IMP=0x0000000000119c4c

@end
