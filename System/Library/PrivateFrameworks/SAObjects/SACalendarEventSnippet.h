//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDate, NSString;

@interface SACalendarEventSnippet
{
}

+ (id)eventSnippetWithDictionary:(id)arg1 context:(id)arg2;	// IMP=0x00000000000096cf
+ (id)eventSnippet;	// IMP=0x00000000000096bd
@property(copy, nonatomic) NSString *timeZoneId;
@property(copy, nonatomic) NSDate *snippetStartDate;
@property(copy, nonatomic) NSDate *snippetEndDate;
@property(copy, nonatomic) NSArray *events;
- (id)encodedClassName;	// IMP=0x00000000000096b0
- (id)groupIdentifier;	// IMP=0x000000000000969c

@end

