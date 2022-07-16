//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>
#import <Radio/NSMutableCopying-Protocol.h>

@class NSArray, NSString;

@interface RadioRecentStationsGroup : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _active;	// 8 = 0x8
    NSString *_localizedTitle;	// 16 = 0x10
    NSArray *_stations;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001b7a8
@property(readonly, copy, nonatomic) NSArray *stations; // @synthesize stations=_stations;
@property(readonly, copy, nonatomic) NSString *localizedTitle; // @synthesize localizedTitle=_localizedTitle;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (id)_copyWithRecentStationsGroupClass:(Class)arg1;	// IMP=0x000000000001b745
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b717
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b70c
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b670
- (unsigned long long)hash;	// IMP=0x000000000001b620
- (id)description;	// IMP=0x000000000001b58c

@end

