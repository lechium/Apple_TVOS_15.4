//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface PGGraphPersonChange
{
    NSString *_personLocalIdentifier;	// 8 = 0x8
    NSSet *_propertyNames;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000449707
@property(readonly, nonatomic) NSSet *propertyNames; // @synthesize propertyNames=_propertyNames;
@property(readonly, nonatomic) NSString *personLocalIdentifier; // @synthesize personLocalIdentifier=_personLocalIdentifier;
- (id)description;	// IMP=0x0000000000449611
- (void)mergeChange:(id)arg1;	// IMP=0x0000000000449549
- (unsigned long long)type;	// IMP=0x000000000044953e
- (id)initWithPersonLocalIdentifier:(id)arg1 propertyNames:(id)arg2;	// IMP=0x000000000044949c

@end

