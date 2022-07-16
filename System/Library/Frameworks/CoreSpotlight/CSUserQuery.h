//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface CSUserQuery
{
}

@property(copy) NSArray *filterQueries; // @dynamic filterQueries;
- (void)cancel;	// IMP=0x0000000000004d98
- (void)start;	// IMP=0x0000000000004d69
@property(readonly) NSString *keyboardLanguage; // @dynamic keyboardLanguage;
- (id)initWithSearchString:(id)arg1 keyboardLanguage:(id)arg2 attributes:(id)arg3;	// IMP=0x0000000000004c2d
- (id)initWithQueryString:(id)arg1 context:(id)arg2;	// IMP=0x0000000000004b43

// Remaining properties
@property(readonly, getter=isCancelled) _Bool cancelled; // @dynamic cancelled;
@property(readonly) unsigned long long foundItemCount; // @dynamic foundItemCount;

@end

