//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate, NSString;

@interface DAMailboxSearchQuery
{
    _Bool _allOrNone;	// 8 = 0x8
    _Bool _deepTraversal;	// 9 = 0x9
    _Bool _rebuildResults;	// 10 = 0xa
    int _bodyType;	// 12 = 0xc
    int _MIMESupport;	// 16 = 0x10
    NSString *_collectionID;	// 24 = 0x18
    long long _truncationSize;	// 32 = 0x20
    NSDate *_priorToDate;	// 40 = 0x28
}

+ (id)mailboxSearchQueryWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3;	// IMP=0x0000000000023a1c
+ (id)mailboxSearchQueryWithSearchString:(id)arg1 consumer:(id)arg2;	// IMP=0x00000000000239ac
- (void).cxx_destruct;	// IMP=0x0000000000024284
@property(nonatomic) _Bool rebuildResults; // @synthesize rebuildResults=_rebuildResults;
@property(nonatomic) _Bool deepTraversal; // @synthesize deepTraversal=_deepTraversal;
@property(nonatomic) int MIMESupport; // @synthesize MIMESupport=_MIMESupport;
@property(retain, nonatomic) NSDate *priorToDate; // @synthesize priorToDate=_priorToDate;
@property(nonatomic) _Bool allOrNone; // @synthesize allOrNone=_allOrNone;
@property(nonatomic) long long truncationSize; // @synthesize truncationSize=_truncationSize;
@property(nonatomic) int bodyType; // @synthesize bodyType=_bodyType;
@property(retain, nonatomic) NSString *collectionID; // @synthesize collectionID=_collectionID;
- (id)dictionaryRepresentation;	// IMP=0x0000000000023e9b
- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;	// IMP=0x0000000000023c0b
- (id)initWithSearchString:(id)arg1 predicate:(id)arg2 consumer:(id)arg3;	// IMP=0x0000000000023b5e
- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;	// IMP=0x0000000000023ab1

@end

