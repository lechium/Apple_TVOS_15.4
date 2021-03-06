//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOAutocompleteFilter-Protocol.h>

@interface GEOResultTypeAutocompleteFilter : NSObject <GEOAutocompleteFilter>
{
    unsigned long long _types;	// 8 = 0x8
}

@property(readonly, nonatomic) unsigned long long types; // @synthesize types=_types;
- (_Bool)applyToAutocompleteParameters:(id)arg1 error:(id *)arg2;	// IMP=0x00000000007df381
- (id)initWithResultTypes:(unsigned long long)arg1;	// IMP=0x00000000007df328
- (id)init;	// IMP=0x00000000007df2fe

@end

