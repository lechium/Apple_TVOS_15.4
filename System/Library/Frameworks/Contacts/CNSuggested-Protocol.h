//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/NSObject-Protocol.h>

@class NSString, SGRecordId;

@protocol CNSuggested <NSObject>
@property(readonly, nonatomic) NSString *suggestionFoundInBundleId;
@property(readonly, nonatomic) SGRecordId *suggestionRecordId;
@property(readonly, nonatomic, getter=isSuggested) _Bool suggested;
@end

