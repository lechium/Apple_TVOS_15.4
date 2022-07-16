//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface _PASArgOption : NSObject
{
    int _longOptionFlag;	// 8 = 0x8
    _Bool _required;	// 12 = 0xc
    NSString *_name;	// 16 = 0x10
    NSString *_shortName;	// 24 = 0x18
    NSString *_helpDescription;	// 32 = 0x20
    NSString *_argMetavar;	// 40 = 0x28
}

+ (id)optionWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4 required:(_Bool)arg5;	// IMP=0x0000000000028c03
+ (id)optionWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4;	// IMP=0x0000000000028be1
+ (id)optionWithName:(id)arg1 shortName:(id)arg2 help:(id)arg3;	// IMP=0x0000000000028bc9
- (void).cxx_destruct;	// IMP=0x0000000000028b8b
@property(readonly, nonatomic) _Bool required; // @synthesize required=_required;
@property(readonly, copy, nonatomic) NSString *argMetavar; // @synthesize argMetavar=_argMetavar;
@property(readonly, copy, nonatomic) NSString *helpDescription; // @synthesize helpDescription=_helpDescription;
@property(readonly, copy, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;	// IMP=0x0000000000028b18
- (id)initWithName:(id)arg1 shortName:(id)arg2 argMetavar:(id)arg3 help:(id)arg4 required:(_Bool)arg5;	// IMP=0x0000000000028897

@end

