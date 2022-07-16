//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSDictionary, NSNumber, NSString, NSURL, SALocation, SAPersonAttribute;

@interface SAMicroblogObject
{
}

+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x000000000001f5d0
+ (id)object;	// IMP=0x000000000001f5be
@property(copy, nonatomic) NSNumber *useLocation;
@property(copy, nonatomic) NSDictionary *socialProfileReferences;
@property(copy, nonatomic) NSString *serviceType;
@property(retain, nonatomic) SAPersonAttribute *sender;
@property(copy, nonatomic) NSURL *refereceId;
@property(copy, nonatomic) NSArray *recipients;
@property(copy, nonatomic) NSNumber *outgoing;
@property(retain, nonatomic) SALocation *location;
@property(copy, nonatomic) NSDictionary *hashtagAlternatives;
@property(copy, nonatomic) NSDate *dateSent;
@property(copy, nonatomic) NSString *content;
@property(copy, nonatomic) NSURL *attachment;
- (id)encodedClassName;	// IMP=0x000000000001f5b1
- (id)groupIdentifier;	// IMP=0x000000000001f59d

@end

