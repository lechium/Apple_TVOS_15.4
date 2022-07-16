//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_os_activity;

@interface GKActivity : NSObject
{
    unsigned int _mode;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSObject<OS_os_activity> *_parent;	// 24 = 0x18
    NSObject<OS_os_activity> *_activity;	// 32 = 0x20
}

+ (void)execute:(CDUnknownBlockType)arg1;	// IMP=0x0040000000071a71
+ (void)named:(id)arg1 execute:(CDUnknownBlockType)arg2;	// IMP=0x00100000000719c1
+ (id)named:(id)arg1;	// IMP=0x00100000000714d9
+ (id)currentOrNew;	// IMP=0x000000000007147b
+ (id)detached;	// IMP=0x001000000007141d
+ (id)activity;	// IMP=0x001000000007126f
- (void).cxx_destruct;	// IMP=0x0020000000071bfa
@property(retain, nonatomic) NSObject<OS_os_activity> *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSObject<OS_os_activity> *parent; // @synthesize parent=_parent;
@property(nonatomic) unsigned int mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void)execute:(CDUnknownBlockType)arg1;	// IMP=0x0010000000071ae7
- (void)named:(id)arg1 execute:(CDUnknownBlockType)arg2;	// IMP=0x0010000000071949
- (id)named:(id)arg1;	// IMP=0x0010000000071929
- (id)child;	// IMP=0x00100000000718ae
- (void)createActivity;	// IMP=0x0010000000071533
- (id)initWithName:(id)arg1 parent:(id)arg2 mode:(unsigned int)arg3;	// IMP=0x00100000000711ba

@end

