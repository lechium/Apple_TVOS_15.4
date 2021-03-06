//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSArray, NSNumber, NSString, NSURL, SALocalSearchRating;

@interface SALocalSearchReviewList <SAAceSerializable>
{
}

+ (id)reviewListWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x0000000000023d86
+ (id)reviewList;	// IMP=0x0000000000023d74
@property(copy, nonatomic) NSNumber *totalReviewCount;
@property(copy, nonatomic) NSArray *selectReviews;
@property(retain, nonatomic) SALocalSearchRating *rating;
@property(copy, nonatomic) NSString *providerId2;
@property(copy, nonatomic) NSURL *providerId;
- (id)encodedClassName;	// IMP=0x0000000000023d67
- (id)groupIdentifier;	// IMP=0x0000000000023d53

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

