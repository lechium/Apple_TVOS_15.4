//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSDictionary, NSString;

@interface RTSourceEventKit
{
    _Bool _allDay;	// 8 = 0x8
    NSString *_eventIdentifier;	// 16 = 0x10
    NSDate *_startDate;	// 24 = 0x18
    NSDate *_endDate;	// 32 = 0x20
    NSString *_title;	// 40 = 0x28
    NSString *_location;	// 48 = 0x30
    NSString *_suggestionInfo_opaqueKey;	// 56 = 0x38
    NSDictionary *_suggestionsSchemaOrg;	// 64 = 0x40
    unsigned long long _sharingStatus;	// 72 = 0x48
}

+ (id)sharingStatusToString:(unsigned long long)arg1;	// IMP=0x0000000000024e62
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000024e5a
- (void).cxx_destruct;	// IMP=0x0000000000025948
@property(readonly, nonatomic) unsigned long long sharingStatus; // @synthesize sharingStatus=_sharingStatus;
@property(readonly, nonatomic) NSDictionary *suggestionsSchemaOrg; // @synthesize suggestionsSchemaOrg=_suggestionsSchemaOrg;
@property(readonly, nonatomic) NSString *suggestionInfo_opaqueKey; // @synthesize suggestionInfo_opaqueKey=_suggestionInfo_opaqueKey;
@property(readonly, nonatomic, getter=isAllDay) _Bool allDay; // @synthesize allDay=_allDay;
@property(readonly, nonatomic) NSString *location; // @synthesize location=_location;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
- (unsigned long long)hash;	// IMP=0x000000000002582f
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000256ed
- (id)description;	// IMP=0x0000000000025538
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000253a3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025101
- (id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 allDay:(_Bool)arg6 sharingStatus:(unsigned long long)arg7 suggestionInfo_opaqueKey:(id)arg8 suggestionsSchemaOrg:(id)arg9;	// IMP=0x0000000000024f3b
- (id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 allDay:(_Bool)arg6 sharingStatus:(unsigned long long)arg7 suggestionInfo_opaqueKey:(id)arg8;	// IMP=0x0000000000024efc
- (id)initWithEventIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 allDay:(_Bool)arg6 sharingStatus:(unsigned long long)arg7;	// IMP=0x0000000000024ebc
- (id)init;	// IMP=0x0000000000024e8d

@end

