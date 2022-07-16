//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CardServices/CRContent-Protocol.h>
#import <CardServices/NSCopying-Protocol.h>
#import <CardServices/NSObject-Protocol.h>
#import <CardServices/NSSecureCoding-Protocol.h>

@class NSArray, NSSet, NSString, SFCard;

@protocol CRCard <NSObject, NSSecureCoding, NSCopying, CRContent>
@property(readonly, nonatomic) unsigned long long cardFormat;
@property(readonly, copy, nonatomic) NSString *cardIdentifier;
@property(readonly, nonatomic) NSArray *dismissalCommands;
@property(readonly, nonatomic) NSSet *interactions;
@property(readonly, nonatomic) NSArray *cardSections;

@optional
@property(readonly, nonatomic) SFCard *backingCard;
@property(readonly, nonatomic) _Bool flexibleSectionOrder;
@property(readonly, nonatomic) _Bool asynchronous;
- (void)loadCardWithCompletion:(void (^)(id <CRCard>))arg1;
@end

