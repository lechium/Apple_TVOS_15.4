//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString, PHSuggestion;

@interface PXSuggesterDebugCollectionItem : NSObject
{
    NSString *_name;	// 8 = 0x8
    NSString *_description;	// 16 = 0x10
    NSDictionary *_info;	// 24 = 0x18
    PHSuggestion *_suggestion;	// 32 = 0x20
    NSDate *_date;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001bf432
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) PHSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(readonly) NSDictionary *info; // @synthesize info=_info;
@property(readonly) NSString *description; // @synthesize description=_description;
@property(readonly) NSString *name; // @synthesize name=_name;
@property(readonly) _Bool isInvalid;
- (id)initWithSuggestion:(id)arg1 suggestionInfo:(id)arg2;	// IMP=0x00000000001beff5

@end

