//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CNFavoritesLookupChangeRecord : NSObject
{
    int _identifier;	// 8 = 0x8
    int _uid;	// 12 = 0xc
    NSString *_value;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_label;	// 32 = 0x20
    NSString *_abDatabaseUUID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000e1449
@property(retain) NSString *abDatabaseUUID; // @synthesize abDatabaseUUID=_abDatabaseUUID;
@property(retain) NSString *label; // @synthesize label=_label;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *value; // @synthesize value=_value;
@property int uid; // @synthesize uid=_uid;
@property int identifier; // @synthesize identifier=_identifier;

@end

