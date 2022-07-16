//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFSwitchParameter
{
    NSString *_localizedOnDisplayName;	// 8 = 0x8
    NSString *_localizedOffDisplayName;	// 16 = 0x10
}

+ (id)defaultOffDisplayName;	// IMP=0x000000000007c42c
+ (id)defaultOnDisplayName;	// IMP=0x000000000007c41f
- (void).cxx_destruct;	// IMP=0x000000000007c2d0
@property(readonly, nonatomic) NSString *localizedOffDisplayName; // @synthesize localizedOffDisplayName=_localizedOffDisplayName;
@property(readonly, nonatomic) NSString *localizedOnDisplayName; // @synthesize localizedOnDisplayName=_localizedOnDisplayName;
@property(readonly, nonatomic) NSString *offDisplayName;
@property(readonly, nonatomic) NSString *onDisplayName;
- (id)initWithDefinition:(id)arg1;	// IMP=0x000000000007bfee
- (Class)singleStateClass;	// IMP=0x000000000007bfdd

@end

