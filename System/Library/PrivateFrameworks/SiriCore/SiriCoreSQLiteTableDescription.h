//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriCore/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface SiriCoreSQLiteTableDescription : NSObject <NSCopying>
{
    NSString *_name;	// 8 = 0x8
    NSArray *_columns;	// 16 = 0x10
    NSArray *_constraints;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000001df33
@property(readonly, copy, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(readonly, copy, nonatomic) NSArray *columns; // @synthesize columns=_columns;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001df0a
- (id)initWithName:(id)arg1 columnsProvider:(CDUnknownBlockType)arg2 constraintsProvider:(CDUnknownBlockType)arg3;	// IMP=0x000000000001de33
- (id)initWithName:(id)arg1 columns:(id)arg2 constraints:(id)arg3;	// IMP=0x000000000001dd4d

@end

