//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServices/AMSTask.h>

@class NSString;

@interface LocalApproveRequestTask : AMSTask
{
    NSString *_itemIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000b573
@property(readonly, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (id)_parseResult:(id)arg1;	// IMP=0x001000000000af4b
- (id)_serverRequestWithUser:(id)arg1 requestIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000000aacc
- (id)perform;	// IMP=0x001000000000a4a0
- (id)initWithItemIdentifier:(id)arg1;	// IMP=0x001000000000a432

@end

