//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ITMLKit/IKJSEntityValueProvider-Protocol.h>

@protocol IKEntityValueProviding;

@interface IKJSEntityValueProvider <IKJSEntityValueProvider>
{
    id <IKEntityValueProviding> _entityValueProvider;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000748cd
@property(retain, nonatomic) id <IKEntityValueProviding> entityValueProvider; // @synthesize entityValueProvider=_entityValueProvider;
- (id)_valueForEntityProperty:(id)arg1;	// IMP=0x00000000000746b3
- (id)valuesForEntityProperties:(id)arg1;	// IMP=0x0000000000074348
- (id)valueForEntityProperty:(id)arg1;	// IMP=0x00000000000741a3

@end

