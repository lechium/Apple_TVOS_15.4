//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriCore/SiriCoreSQLiteTable-Protocol.h>

@class NSArray, NSString;

@interface _SiriCoreSQLiteTableInfo : NSObject <SiriCoreSQLiteTable>
{
    NSString *_name;	// 8 = 0x8
    NSArray *_columns;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001142a
@property(readonly, copy, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithName:(id)arg1 columns:(id)arg2;	// IMP=0x000000000001135d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

