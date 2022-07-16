//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUUID, VOTElement;

@interface VOTElementFetchFoundData : NSObject
{
    _Bool _needsForceCacheUpdate;	// 8 = 0x8
    _Bool _searchEndedWithDifferentGroup;	// 9 = 0x9
    VOTElement *_element;	// 16 = 0x10
    long long _direction;	// 24 = 0x18
    unsigned long long _clientGeneration;	// 32 = 0x20
    long long _searchType;	// 40 = 0x28
    NSUUID *_searchUUID;	// 48 = 0x30
    struct _NSRange _range;	// 56 = 0x38
}

+ (id)fetchFoundData:(id)arg1 forceUpdate:(_Bool)arg2 direction:(long long)arg3 generation:(unsigned long long)arg4 range:(struct _NSRange)arg5 searchType:(long long)arg6;	// IMP=0x0040000000100845
- (void).cxx_destruct;	// IMP=0x0020000000100aa4
@property(nonatomic) _Bool searchEndedWithDifferentGroup; // @synthesize searchEndedWithDifferentGroup=_searchEndedWithDifferentGroup;
@property(retain, nonatomic) NSUUID *searchUUID; // @synthesize searchUUID=_searchUUID;
@property(nonatomic) long long searchType; // @synthesize searchType=_searchType;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) unsigned long long clientGeneration; // @synthesize clientGeneration=_clientGeneration;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) _Bool needsForceCacheUpdate; // @synthesize needsForceCacheUpdate=_needsForceCacheUpdate;
@property(retain, nonatomic) VOTElement *element; // @synthesize element=_element;
- (id)description;	// IMP=0x0010000000100913

@end
