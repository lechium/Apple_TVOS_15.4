//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Message/NSObject-Protocol.h>

@class NSArray, NSDictionary;

@protocol MFQueryableLibraryAdapter <NSObject>
- (NSArray *)mailboxesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (NSArray *)messagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 limit:(unsigned long long)arg3;
- (unsigned long long)countMessagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2;
- (NSDictionary *)countMessagesMatchingQuery:(unsigned long long)arg1 variable:(id)arg2 groupBy:(unsigned long long)arg3;
@end

