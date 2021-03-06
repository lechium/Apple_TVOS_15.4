//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPerson.h>

#import <PhotosGraph/PGPersonResult-Protocol.h>

@class NSDate, NSString;

@interface PHPerson (PGPersonResult) <PGPersonResult>
+ (unsigned long long)type;	// IMP=0x00000000001b3c83
@property(readonly, nonatomic) _Bool isInferredChild;
@property(readonly, nonatomic) NSDate *birthdayDate;
- (long long)compareToPerson:(id)arg1;	// IMP=0x00000000001b36ac
@property(readonly, nonatomic) NSString *fullName;
@property(readonly, nonatomic) NSString *suggestedContactIdentifier;
@property(readonly, nonatomic) NSString *contactIdentifier;
@property(readonly, nonatomic) NSString *keywordDescription;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isVerified;
@property(readonly, nonatomic) NSString *localIdentifier;
@property(readonly) Class superclass;
@end

