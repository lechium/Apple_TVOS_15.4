//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EDAMBootstrapSettings, NSString;

@interface EDAMBootstrapProfile
{
    NSString *_name;	// 8 = 0x8
    EDAMBootstrapSettings *_settings;	// 16 = 0x10
}

+ (id)structFields;	// IMP=0x0000000000289677
+ (id)structName;	// IMP=0x000000000028966a
- (void).cxx_destruct;	// IMP=0x00000000002897e5
@property(retain, nonatomic) EDAMBootstrapSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;

@end

