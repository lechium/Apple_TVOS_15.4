//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSError, NSOperation, NSString;

__attribute__((visibility("hidden")))
@interface TVHKStoreSearchOperation
{
    NSDictionary *_results;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSString *_searchTerm;	// 24 = 0x18
    unsigned long long _searchType;	// 32 = 0x20
    NSOperation *_connectionRequestOperation;	// 40 = 0x28
}

+ (id)_clientApplicationParameterValueForSearchType:(unsigned long long)arg1;	// IMP=0x00000000000b7c73
+ (id)new;	// IMP=0x00000000000b73dd
- (void).cxx_destruct;	// IMP=0x00000000000b7d1a
@property(retain, nonatomic) NSOperation *connectionRequestOperation; // @synthesize connectionRequestOperation=_connectionRequestOperation;
@property(readonly, nonatomic) unsigned long long searchType; // @synthesize searchType=_searchType;
@property(readonly, copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDictionary *results; // @synthesize results=_results;
- (void)_handleResponse:(id)arg1;	// IMP=0x00000000000b7967
- (void)cancel;	// IMP=0x00000000000b78e9
- (void)executionDidBegin;	// IMP=0x00000000000b756a
- (id)initWithSearchTerm:(id)arg1 andType:(unsigned long long)arg2;	// IMP=0x00000000000b747b
- (id)init;	// IMP=0x00000000000b740c

@end

